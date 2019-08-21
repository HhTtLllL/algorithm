#include<cstdio>
#include<iostream>

using namespace std;
int arow[2005];
int acol[2005];
int a[10];
int main( )
{
	int row,col,rownum,colnum,num;
	cin >> row;cin >> col;cin >> rownum;cin >> colnum;cin >> num;
	int temp;
	for( int i = 1;i <= num;i++)
	{
		scanf( "%d%d%d%d",&a[1],&a[2],&a[3],&a[4]);
		if(a[1] == a[3])
		{
			if( a[2] < a[4])
			{
			//	temp = a[2];
				acol[a[2]] = 1;
			}
			else
			{
		//		temp = a[3];
				acol[a[4]] = 1;
			}
		}
		else if( a[2] == a[4])
		{
			if(a[1] < a[3])
			{
//				temp = a[1];
				arow[a[1]] = 1;
			}
			else
			{
//				temp = a[3];
				arow[a[3]] = 1;
			}

		}
	}

		for(int i = 1;i <= row;i++)   if(arow[i] != 0)    printf( "%d ",i);
		cout << '\n';
		for(int i = 1;i <= col;i++)   if(acol[i] != 0)    printf( "%d ",i);
}
