#include<cstdio>
#include<cmath>

using namespace std;


void queue1( );
int time;
//   i  代表 行   a[i]  代表列
int judge(int row,int col);
int N,n;
void print( );
int a[20];
int main( )
{
	scanf( "%d",&N);
	queue1( );

	printf( "%d\n",n);
}
void queue1( )
{
	for(int i = 0;i < N;i++)    a[i] = -999;    //对棋盘进行初始化
 	
	int i = 0,j = 0;
	while(i < N)   //在某一行中判断
	{ 
		while(j < N)   //在某一列上判断
		{
			if(judge(i,j))  //如果这一列可以放 皇后
			{
				a[i] = j;  //将这列放进 第i 行上
				j = 0;  //将 j 边为零 ,从下一行 0 列开始
				break; 
			}
			else ++j;  //如果这一列不可以放皇后,判断下一列
		}

		//开始回溯
		if(a[i] == -999) //如果这一行没有皇后
		{
			if(i == 0)   break;//如果在第一行
			else       
			{
				i--;     //回溯到上一行 
				j = a[i] + 1;    //然后从上一行的 下一列开始判断
				a[i] = -999;  //将上一行的列 清空 
				continue;
			}
		}

		if(i == N-1)   //如果 放到了最后一行
		{
			time++;
			if(time < 4)
			{
				for(int i = 0;i < N;i++)
				{
					printf( "%d ",a[i]+1);
				}
				printf( "\n");
			}
			n++;      // 总数累加 1 
			j = a[i] + 1;   //从 下一列  开始判断
			a[i] = -999;  //将这一列清空
			continue;
		}
		++i;	
	}
}

int judge(int row,int col)
{
	int i;
	for(i = 0;i < N;i++)	if(a[i] == col || abs(i - row) == abs(a[i] - col))	return 0; 
	return 1;
}
