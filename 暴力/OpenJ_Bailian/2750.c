//##################################################################
// File Name: 2750.c
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2019年11月27日 星期三 13时23分37秒
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
	int a;
	scanf("%d",&a);
	if(a%2)
	{
		printf("0 0\n");
		return 0;
	}
	
	printf("%d %d\n",a/4 + ((a%4)/2),a/2);

	return 0;
}

