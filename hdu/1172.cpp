/*
 * 猜数字游戏是gameboy最喜欢的游戏之一。游戏的规则是这样的：计算机随机产生一个四位数，然
 * 后玩家猜这个四位数是什么。每猜一个数，计算机都会告诉玩家猜对几个数字，其中有几个数字在正确的位置上。
比如计算机随机产生的数字为1122。如果玩家猜1234,因为1,2这两个数字同时存在于这两个数中，而且1在这两个数中的位置是相同的，所以
计算机会告诉玩家猜对了2个数字，其中一个在正确的位置。如果玩家猜1111,那么计算机会告诉他猜对2个数字，有2个在正确的位置。 
现在给你一段gameboy与计算机的对话过程，你的任务是根据这段对话确定这个四位数是什么。 



*/
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<cstring>

using namespace std;

int change(int num);

char a[105][10];
int b[105];
int c[105];
char temp[10];
int n;
int judge1(char temp[]);
int judge2(char temp[]);

int main( )
{
	while(cin >> n && n)
	{
		for(int i = 1;i <= n;i++)   cin >> a[i] >> b[i] >> c[i];

		int cnt = 0;
		int temp2;
		for(int i = 1000;i <= 9999;i++)
		{
			change(i);
			int flag1 = judge1(temp);
			int flag2 = judge2(temp);
			if(flag1 && flag2)
			{
				cnt++;
				temp2 = i;
			}

		}
		if(cnt == 1)  cout << temp2 << endl;
		else cout << "Not sure" << endl;

	
	}
}
int judge1(char temp[])
{
	for(int i = 1;i <= n;i++)
	{
		int cnt = 0;
		for(int j = 0;j < 4;j++)
		{
			if(a[i][j] == temp[j])
			{
				cnt++;
			}
		}
		if(cnt != c[i])
		{
			return 0;
		}
	}

	return 1;
}
int judge2(char temp[])
{
	char temp2[10];
	for(int i = 1;i <= n;i++)
	{
		strcpy(temp2,temp);
		int cnt = 0;

		for(int j = 0;j < 4;j++)
		{
			for(int k = 0;k < 4;k++)
			{
				if(a[i][j] == temp2[k])
				{
					cnt++;
					temp2[k] = '-';
					break;
				}
			}
		}

		if(cnt != b[i])  return 0;
	}

	return 1;
}
int change(int num)
{
	int i = 3;
	while(num)
	{
		int tempnum = num%10;
		temp[i] = tempnum + 48;
		num /= 10;
		i--;
	}

	return 0;
}
