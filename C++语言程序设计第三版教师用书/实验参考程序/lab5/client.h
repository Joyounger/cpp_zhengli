//client.h
#ifndef  Client_H
#define Client_H

#include <iostream>
#include <string>
using namespace std;

class CLIENT
{
private:
    static char ServerName;
    static int ClientNum;
public:
    CLIENT();
    ~CLIENT();
	 static int GetClientNum();
    static void ChangServerName(char name);
	 static char GetServerName();
};

#endif//Client_H
