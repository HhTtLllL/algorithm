#include<stdio.h>
#include<iostream>
#include<string.h>
//using namespace std;
char s[40];
int main( )
{
	int i = 0;
	int j;
	int temp = 0;
	scanf( "%s",s);
	int len = strlen(s);
	while(i <= len) 
	{
		if(s[i] == '.' || s[i] == '/' || s[i] == '%') 	temp = i; 
		i++;
	}			

	if(temp != 0)
	{
		int temp2 = 0;
		temp2 = temp - 1;    //temp2   =  符号的前一个位置
		
		while(s[temp2] == '0')    temp2--;
		for(j = temp2;j >= 0;j--) putchar(s[j]);
		if(s[temp] == '.')
		{
			if(-1 == j)  putchar('0');
		}
		putchar(s[temp]);    //输出符号
		temp2 = temp + 1;   // temp2   =   符号的后一个位置 
		if(s[temp] == '.' || s[temp] == '%')
		{
			while(s[temp2] == '0')   temp2++;
			for(j = i - 2;j >= temp2;j--)   putchar(s[j]);
			temp2--;
		}
		if(s[temp] == '/')
		{
			while(s[i-2] == '0') i--;
			for(j = i - 2;j >= temp2;j--) putchar(s[j]);
			temp2--;
		}
		if(s[temp] == '.')
		{
			if(temp2 == i -2)  putchar('0');
		}

	}
	else
	{
		while(s[i - 2] == '0')	i--;
		for(j = i - 2;j >= 0;j--)   putchar(s[j]);
		
	}

}
