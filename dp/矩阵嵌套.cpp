#include <iostream>
#include <string.h>
#include <algorithm>
#define MAXSIZE 100

using namespace std;

typedef struct
{
	int length;
	int width;
}Rectangle;

int G[MAXSIZE][MAXSIZE];
Rectangle rec[MAXSIZE];

int n;//矩形数
int cnt;

// a 是否可以插入在b中
int isInside(Rectangle a,Rectangle b)
{
	return (a.length < b.length && a.width < b.width || a.length < b.width && a.width < b.length) ? 1 : 0;
}

void dp(int row,int length)
{
	cnt = (length > cnt) ? length : cnt;

	for(int j = 0;j < n;j++)
	{
		if(G[row][j] > 0)
		{
			printf("%d->%d\n",row,j);
			dp(j,length + 1);
		}
	}
}


int main()
{
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		cin >> rec[i].length >> rec[i].width;
	}

	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < n;j++)
		{
			G[i][j] = isInside(rec[i],rec[j]);
		}
	}

	int max = 0;
	for(int i = 0;i < n;i++)
	{
		cnt = 0;
		printf("begin from rect %d\n",i);
		dp(i,1);  // 以每一个 点为起始点
		max = (cnt > max) ? cnt : max;
	}

	cout << max << endl;
	
	return 0;
}
