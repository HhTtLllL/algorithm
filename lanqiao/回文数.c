//##################################################################
// File Name: 回文数.c
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2019年12月03日 星期二 21时18分56秒
//=============================================================
//!/usr/bin/python

#include <sys/socket.h>
#include <netinet/in.h>
#include <assert.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <libgen.h>
#include <sys/uio.h>
#include <sys/stat.h>
#include <sys/sendfile.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/mman.h>

int main()
{

	for(int i = 1000;i < 10000;i++)
	{
		if((i/1000) == i%10 && ((i/100) %10) == ((i/10) %10)) printf("%d\n",i);
	}
	

	return 0;
}

