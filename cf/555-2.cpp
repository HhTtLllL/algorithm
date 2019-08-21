#include<cstdio>
#include<iostream>

using namespace std;
int  a[10];
char b[200005];
int main( )
{
	int n;
	cin >> n;
	getchar( );
	for(int i = 1;i <= n;i++)   scanf( "%c",&b[i]);
	getchar( );
	for(int i = 1;i <= 9;i++)   scanf( "%d",&a[i]);
	int temp2 = 0;
	for(int i = 1;i <= n;i++)
	{
		/*int temp = int(b[i] -48 );
		if(a[temp] + 48 < b[i] && temp2 <1)
		{
			a[temp]= b[i] - 48;
			printf( "%c",b[i]);
			temp2++;
		}
		else
		{
			b[i] = a[temp] + 48;
			printf( "%d",a[temp]);
		}*/
	}

}
