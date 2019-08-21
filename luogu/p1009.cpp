#include<bits/stdc++.h>
#include<cstdio>
#include<iostream>

using namespace std;

int main( )
{
	 i,j,num;
	long long int  leicheng = 1;
	long long int sum = 0;
	scanf( "%lld",&num);
	for(i = 1;i <= num;i++ )
	{
		for( j = 1;j <= i;j++)
		{
			leicheng *= j;
		}
		sum += leicheng;
		leicheng = 1;
	}
	printf( "%lld\n",sum);
}


