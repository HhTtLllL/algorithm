#include<iostream>
#include<stdio.h>

using namespace std;

int main( )
{
	int num,len;
	int i,j,len1 = -1,time = 0;	
	int flag = 0,temp = -1;
	scanf( "%d%d",&len,&num);
	int a[len] = {0},b[num];
	for(i = 0;i < num;i++)
	{
		scanf( "%d",&b[i]);
	}
	for(i = 0;i < num;i++)
	{
		for(j = 0;j <= temp;j++)	
		{
			if(a[j] == b[i])
			{
				flag = 1;
			}
		}

		if(flag != 1)
		{
			if(temp < len)
			{
				temp++;
			}
			len1++;
			a[len1%len] = b[i];
			time++;
		}
		flag = 0;
	}

	printf( "%d\n",time);
}
