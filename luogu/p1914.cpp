#include<cstdio>
#include<iostream>
#include<cstring>

using namespace std;
char a[55];
int b[55];
int main( )
{
	int n;
	string s;
	scanf( "%d%s",&n,a);
	int len = strlen(a);
	for(int i = 0;i < len;i++)
	{
		a[i] =(a[i] + n - 97)%26;
		printf( "%c",(a[i] + 97));
	}
}
