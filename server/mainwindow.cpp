#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtConcurrent/QtConcurrent>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
    {
        ui->setupUi(this);
        configuratorChoosenId=-1;
        graphics=new _graphics(ui->textEdit,ui->graphicsView->width()-10,ui->graphicsView->height()-10);
        graphics->clear();
        ui->graphicsView->setScene(graphics->PalletScene);
        dsp=new dispatcher();
        monitoring=new Monitoring(dsp,graphics);
        monitoringSocketObj=new MonitoringSocket(dsp,monitoring);
        QObject::connect(monitoringSocketObj, SIGNAL(graphicsClear()), graphics, SLOT(clear()));
        QObject::connect(monitoringSocketObj, SIGNAL(showClientSignal(int,int,char*)), graphics, SLOT(paintClient(int,int,char*)));
        QObject::connect(monitoringSocketObj, SIGNAL(paintArbiterSignal(int,int,int,int,char*)), graphics, SLOT(paintArbiter(int,int,int,int,char*)));
        QObject::connect(monitoringSocketObj, SIGNAL(paintTraceObjectSignal(int,int,int,int,char*,int)), graphics, SLOT(paintTraceObject(int,int,int,int,char*,int)));

        server=new _server(graphics, monitoring,dsp,monitoringSocketObj);
        QObject::connect(server, SIGNAL(graphicsClear()), graphics, SLOT(clear()));
        QObject::connect(server, SIGNAL(showClientSignal(int,int,char*)), graphics, SLOT(paintClient(int,int,char*)));
        QObject::connect(server, SIGNAL(paintArbiterSignal(int,int,int,int,char*)), graphics, SLOT(paintArbiter(int,int,int,int,char*)));
        QObject::connect(server, SIGNAL(paintTraceObjectSignal(int,int,int,int,char*,int)), graphics, SLOT(paintTraceObject(int,int,int,int,char*,int)));

        QObject::connect(server, SIGNAL(paintConfigurator()), this, SLOT(paintConfigurator()));
        QObject::connect(server, SIGNAL(showClientDisconnectedError()), graphics, SLOT(showClientDisconnectedError()));

        monitoring_serv_init();
        main_serv_init();

        // Запуск многопоточных классов
        // Поток 2 - CheckNewClients на основной сокет
        /*multiThreadServPart=new MultiThreadServerPart();
        multiThreadServPart->init(server);
        QObject::connect(multiThreadServPart, SIGNAL(graphicsClear()), graphics, SLOT(clear()));
        QObject::connect(multiThreadServPart, SIGNAL(showClientSignal(int,int,char*)), graphics, SLOT(paintClient(int,int,char*)));
        QObject::connect(multiThreadServPart, SIGNAL(paintArbiterSignal(int,int,int,int,char*)), graphics, SLOT(paintArbiter(int,int,int,int,char*)));
        QObject::connect(multiThreadServPart, SIGNAL(paintTraceObjectSignal(int,int,int,int,char*,int)), graphics, SLOT(paintTraceObject(int,int,int,int,char*,int)));
        QObject::connect(server, SIGNAL(globalQuit()), multiThreadServPart, SLOT(globalQuit()));
        //multiThreadServPart->start();*/

        // Поток 3 - CheckNewClients на второй сокет
        monitoringCheckNewMultithread=new MonitoringCheckNewMultithread();
        monitoringCheckNewMultithread->init(monitoringSocketObj);
        QObject::connect(server, SIGNAL(globalQuit()), monitoringCheckNewMultithread, SLOT(globalQuit()));
        //monitoringCheckNewMultithread->start();
        //server->checkNewClientsObject=multiThreadServPart;
        server->monitoringCheckNewMultithread=monitoringCheckNewMultithread;

        server->start();

    }

MainWindow::~MainWindow()
{
    delete server;
    delete ui;
}

void MainWindow::main_serv_init()
{
    int result=server->initialize();
    if(result==1)
        ui->textEdit->setText("WSAStratup error");
    if(result==2)
        ui->textEdit->setText("Error with socket");
    if(result==3)
        ui->textEdit->setText("Error with bind");
    else if(result==4)
        ui->textEdit->setText("Error with listen");
    else if(result==0)
    {
        ui->textEdit->setText("Server started.\nWaiting for connections...");
    }
}
void MainWindow::monitoring_serv_init()
{
    int result= monitoringSocketObj->initialize();
    if(result==1)
        ui->textEdit->setText("WSAStratup error");
    if(result==2)
        ui->textEdit->setText("Error with socket");
    if(result==3)
        ui->textEdit->setText("Error with bind");
    else if(result==4)
        ui->textEdit->setText("Error with listen");
    else if(result==0)
    {
        ui->textEdit->setText("Server started.\nWaiting for connections...");
    }
}

void MainWindow::main_serv_send()
{
    server->clearArbiters();
    server->sendScriptToClients();
    //server->start();
}

void MainWindow::on_SendButton_clicked()  // Запуск
{
    QString file_script = QFileDialog::getOpenFileName(this, tr("Open File"), "", tr(""));
    //QString file_script="C:\\QTProjects\\diplom_server\\server\\script.lua";
    if(file_script!="")
    {
        server->scriptSet=true;
        server->file_script=file_script.toStdString();
        graphics->clear();
        if(server->disp->nclients>0)
        {
            setMonitoringType();
            if(monitoringSocketObj->monitoringType==2)
            {
                monitoringSocketObj->sendCommand(3);      // Пропускаем рассылку скрипта шаг.
                monitoringSocketObj->sendCommand(3);      // Пропускаем запуск скрипта шаг.
                monitoringSocketObj->sendCommand(3);      // Первый шаг.
            }
            main_serv_send();
        }
    }
}
/*
void MainWindow::on_pushButton_clicked()
{

}

void MainWindow::on_pushButton_3_clicked()
{
    // Paint
    monitoring->getClientsArray();
    graphics->clear();
    for(int i=0;i<dsp->nclients;i++)
        graphics->paintClient(monitoring->clientsList[i].position_x,monitoring->clientsList[i].position_y,monitoring->clientsList[i].worker_addr);
    for(int i=0;i<monitoring->arbitersListCount;i++)
        graphics->paintArbiter(monitoring->arbitersList[i].position_x,
                               monitoring->arbitersList[i].position_y,
                               monitoring->clientsList[monitoring->arbitersList[i].clientsListId].position_x,
                               monitoring->clientsList[monitoring->arbitersList[i].clientsListId].position_y,
                               monitoring->arbitersList[i].arbiter_id);
}
*/

void MainWindow::TEST_GENERATE_DSP_TABLE()
{
    dsp->nclients=6;
    dsp->table[0].arbiters_count=0;
    strcpy(dsp->table[0].arbiters,"|");
    dsp->table[0].worker_addr=0;

    dsp->table[1].arbiters_count=1;
    strcpy(dsp->table[1].arbiters,"|1;0|");
    dsp->table[1].worker_addr=1;

    dsp->table[2].arbiters_count=2;
    strcpy(dsp->table[2].arbiters,"|2;0|2;1|");
    dsp->table[2].worker_addr=2;

    dsp->table[3].arbiters_count=3;
    strcpy(dsp->table[3].arbiters,"|3;0|3;1|3;2|");
    dsp->table[3].worker_addr=3;

    dsp->table[4].arbiters_count=4;
    strcpy(dsp->table[4].arbiters,"|4;0|4;1|4;2|4;3|");
    dsp->table[4].worker_addr=4;

    dsp->table[5].arbiters_count=5;
    strcpy(dsp->table[5].arbiters,"|5;0|5;1|5;2|5;3|5;4|");
    dsp->table[5].worker_addr=5;

}

void MainWindow::on_checkBox_clicked()
{
    if(ui->checkBox->isChecked())
        ui->checkBox_2->setEnabled(true);
    else
    {
        ui->checkBox_2->setEnabled(false);
        ui->checkBox_2->setChecked(false);
    }
    setMonitoringType();
}

void MainWindow::on_checkBox_2_clicked()
{
    if(ui->checkBox_2->isChecked())
        ui->pushButton->setEnabled(true);
    else
        ui->pushButton->setEnabled(false);
    setMonitoringType();
}

void MainWindow::on_pushButton_clicked() // След.Шаг
{
    for(int i=0;i<monitoring->arbitersListCount;i++)
        monitoring->traceObjectsList[i].type=-1;
    monitoringSocketObj->sendCommand(3);
    monitoringSocketObj->monitoringType=2;
}

void MainWindow::on_pushButton_3_clicked()  // Сохранение
{
    monitoringSocketObj->sendCommand(2);      // Останавливаем клиентов
    monitoringSocketObj->monitoringType=2;
    monitoringSocketObj->getMonitoringMessage(); // Считываем все сообщения мониторинга(очищаем очередь)
    QString file_save = QFileDialog::getSaveFileName(this, "Save file", "", "");
    //QString file_save="C:\\QTProjects\\diplom_server\\build-server-Desktop_Qt_5_2_1_MinGW_32bit-Debug\\save.txt";
    if(file_save!="")
    {
        monitoringSocketObj->save_file=file_save.toStdString();
        monitoringSocketObj->sendCommand(4);
        monitoringSocketObj->monitoringType=4;
        while(!monitoringSocketObj->saving_done)
        {
            sleep(1);
        }
        // Т.к. очереди на сервере и клиентах очистились - восстанавливаем их и продолжаем работу
        server->clearArbiters();
        monitoringSocketObj->sendCommand(0);
        monitoringSocketObj->monitoringType=0;
        server->loadCreateActors();
        sleep(1);
        setMonitoringType();
        server->loadSendOutputMessages();
        server->loadInputMessages();
    }
}

void MainWindow::on_pushButton_4_clicked()  // Загрузка
{
    graphics->clear();
    server->clearArbiters();
    QString file_load = QFileDialog::getOpenFileName(this, tr("Open File"), "", tr(""));
    //QString file_load="C:\\QTProjects\\diplom_server\\build-server-Desktop_Qt_5_2_1_MinGW_32bit-Debug\\save.txt";
    if(file_load!="")
    {
        server->scriptSet=true;
        monitoringSocketObj->save_file=file_load.toStdString();
        monitoringSocketObj->loadFile(server->file_script);
        server->paused=true;

        monitoringSocketObj->sendCommand(0);
        monitoringSocketObj->monitoringType=0;

        server->sendScriptToClients(true);
        server->loadCreateActors();
        sleep(1);
        setMonitoringType();

        server->loadSendOutputMessages();
        server->loadInputMessages();

        server->paused=false;
    }
}

void MainWindow::setMonitoringType()
{
    bool monitoring=false;
    bool tracing=false;
    if(ui->checkBox->isChecked())
        monitoring=true;
    if(ui->checkBox_2->isChecked())
        tracing=true;

    if(!monitoring && !tracing)
    {
        monitoringSocketObj->sendCommand(0);
        monitoringSocketObj->monitoringType=0;
    }
    else if(monitoring && !tracing)
    {
        monitoringSocketObj->sendCommand(1);
        monitoringSocketObj->monitoringType=1;
    }
    else if(monitoring && tracing)
    {
        monitoringSocketObj->sendCommand(2);
        monitoringSocketObj->monitoringType=2;
    }
}


/*void MainWindow::on_pushButton_2_clicked()  // Пауза
{
    monitoringSocketObj->sendCommand(2);
    monitoringSocketObj->monitoringType=2;
}*/

void MainWindow::clickExit()
{
    server->serverGlobalQuit=true;
    server->stop();
    monitoringSocketObj->sendCommand(0);
    monitoringSocketObj->stop();
    //multiThreadServPart->wait();
    //monitoringCheckNewMultithread->wait();
}

void MainWindow::on_action_3_triggered()   // Выход
{
    clickExit();
    this->close();
}

void MainWindow::on_MainWindow_destroyed()
{
    clickExit();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    //Здесь код
    clickExit();
    event->accept();
}

void MainWindow::paintConfigurator()
{
    QMutex mutex;
    mutex.lock();
    ui->treeWidget->clear();
    /*for( int i = ui->treeWidget->topLevelItemCount(); i >= 0; --i ){
      delete ui->treeWidget->topLevelItem( i );
    }*/
    ui->treeWidget->addTopLevelItems(server->configuratorItems);
    mutex.unlock();
}

void MainWindow::on_treeWidget_itemClicked(QTreeWidgetItem *item, int column)  // Выбор работника в списке конфигурации
{
    configuratorChoosenId=item->text(column).toInt();
    if(server->disp->table[configuratorChoosenId].active==true)
    {
        ui->pushButton_5->setEnabled(false);
        ui->pushButton_6->setEnabled(true);
    }
    else
    {
        ui->pushButton_5->setEnabled(true);
        ui->pushButton_6->setEnabled(false);
    }
}

void MainWindow::on_pushButton_5_clicked()   // Конфигурация On
{
    if(configuratorChoosenId!=-1)
    {
        server->disp->table[configuratorChoosenId].active=true;
        ui->pushButton_5->setEnabled(false);
        ui->pushButton_6->setEnabled(true);
    }
}

void MainWindow::on_pushButton_6_clicked()   // Конфигурация Off
{
    if(configuratorChoosenId!=-1)
    {
        server->disp->table[configuratorChoosenId].active=false;
        ui->pushButton_5->setEnabled(true);
        ui->pushButton_6->setEnabled(false);
    }
}
