#include<stdio.h>
#include<iostream>
#include<algorithm>

int a[1005]
//还要排除 在某一行或某一列已经分过 过道,则再次不用分过道
using namespace std;
int main( )
{
	int row,col;
	int numrow,numcol;
	int num;
	int i = 0,j = 0;
	int temp[4];
	scanf("%d%d%d%d%d",&row,&col,&numrow,&numcol,&num);
	int numrow1 = numrow;
	int numcol1 = numcol;
	int sol1[numrow];
	int sol[numcol];
	while(num--)
	{
		scanf("%d%d%d%d",&temp[0],&temp[1],&temp[2],&temp[3]);
		if(temp[0] == temp[2])
		{
			if(numcol--)
			{
				sol[i] = min(temp[1],temp[3]);
				i++;
			}
		}
		else if(temp[1] == temp[3])
		{
			if(numrow--)
			{
				sol1[j] = min(temp[0],temp[2]);
				j++;
			}
		}
	}
       	sort(sol,sol + numcol1);
	sort(sol1,sol1 + numrow1);

	for(i = 0;i < numrow1;i++)
	{
		if(sol1[i] == sol1[i+1])
		{
			continue;
		}
		else
		{
			printf("%d",sol1[i]);
		}
		if(i != numrow1-1)
		{
			printf( " ");
		}
	}
	printf( "\n");
	for(i = 0;i < numcol1;i++)
	{
		if(sol[i] == sol[i+1])
		{
			continue;
		}
		else
		{
			printf( "%d",sol[i]);
		}
		if(i != numcol1-1){
			printf( " ");
		}
	}
}
