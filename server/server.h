#ifndef SERVER_H
#define SERVER_H


#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "dispatcher.h"
#include "graphics.h"
#include "monitoringsocket.h"
#include "monitoring.h"
#include <QThread>
#include <QObject>


#include <string>
#include <iostream>
using namespace std;

#pragma comment(lib, "Ws2_32.lib")


class _server:public QThread
{
    Q_OBJECT
friend class MultiThreadServerPart;
private:
    int ServerSocket;
    //WSADATA WsaData;
    int idclient;
    _graphics *graphics;
    Monitoring *monitoring;
    MonitoringSocket *monitoringSocket;

    void collect_all_received_answers(int &total_received_answers);
public:
   // MultiThreadServerPart *checkNewClientsObject;
    MonitoringCheckNewMultithread *monitoringCheckNewMultithread;

    dispatcher *disp;
    QList<QTreeWidgetItem *> configuratorItems;
    bool serverGlobalQuit;
    bool paused;
    bool scriptSet;
    string file_script;

    _server(_graphics *graphics, Monitoring *monitoring, dispatcher *disp, MonitoringSocket *monitoringSocket);
    ~_server();
    int initialize();
    void stop();
    dispatcher_answer receiveMessage(int client_id);
    void clientDisconnected(int client_id);
    void sendMessage(int client_id, dispatcher_answer answer);
    int getClients();
    dispatcher_answer processMessage(dispatcher_answer received_answer);
    int getTotalClients();
    void send_file(int client_id);
    void clearArbiters();
    void showAnswer(dispatcher_answer received_answer, bool final=true);
    void sendScriptToClients(bool loadSaved=false);
    void sendScriptOneClient(int client_id);
    void work_cycle();
    void showClients();
    void checkForNewClients();

    void loadCreateActors();
    void loadSendOutputMessages(); // Сообщения которые шли с сервера
    void loadInputMessages();      // Сообщения которые шли на сервер

    void run();
signals:
    void showClientSignal(int x,int y,char* str);
    void paintArbiterSignal(int x, int y, int client_x, int client_y, char* text);
    void paintTraceObjectSignal(int x, int y, int arbiter_x, int arbiter_y, char* text, int type);
    void graphicsClear();
    void paintConfigurator();
    void showClientDisconnectedError();
    void globalQuit();

};

/*
class MultiThreadServerPart:public QThread
{
    Q_OBJECT
    _server *server;
    bool global_quit;

    void showClients();
protected:
        void run();
public:
        void init(_server *server);
        void checkForNewClients();
signals:
    void showClientSignal(int x,int y,char* str);
    void paintArbiterSignal(int x, int y, int client_x, int client_y, char* text);
    void paintTraceObjectSignal(int x, int y, int arbiter_x, int arbiter_y, char* text, int type);
    void graphicsClear();
public slots:
    void globalQuit();

};*/

#endif // SERVER_H
