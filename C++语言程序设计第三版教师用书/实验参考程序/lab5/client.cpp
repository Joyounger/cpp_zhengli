//client.cpp
#include "client.h"

CLIENT::CLIENT()
{
	ClientNum++ ; 
}

CLIENT::~CLIENT() 
{ 
	ClientNum-- ; 
}

int CLIENT::GetClientNum() 
{
	return ClientNum; 
}

void CLIENT::ChangServerName(char name)
{ 
	ServerName=name; 
}

char CLIENT::GetServerName() 
{
	return ServerName; 
}
