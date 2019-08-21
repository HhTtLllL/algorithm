#include<cstdio>
#include<iostream>

using namespace std;
int a[10005][6];
int main( )
{
	int n;   cin >> n;
	for( int i = 1;i <= n;i++)
	{
		scanf( "%d%d%d%d",&a[i][1],&a[i][2],&a[i][3],&a[i][4]);
	}
	int flag = 1;
	int x,y;    cin >> x;cin >> y;

	for(int i = n;i >= 1;i--)
	{
		if(x >= a[i][1] && x <= (a[i][1] + a[i][3]) && y >= a[i][2] && y <= (a[i][2] + a[i][4]))
		{
			cout << i << endl;
			flag = 0;
			break;
		}
	}
	if( flag == 1)   printf( "%d",-1);

}
