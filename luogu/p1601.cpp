/*#include<cstdio>
#include<iostream>

using namespace std;

int a[505];
int b[505];

int main( )
{
	int temp;
	int num1;
	int i = 1;
	while( ( temp = getchar( )) != '\n')
	{
		a[i++] = temp-48;
	}
	i--;
	int j = 1;
	while((temp = getchar( )) != '\n')
	{
		b[j++] = temp-48;
	}
	j--;

	if(i > j)
	{
		num1 = i;
		while(j >= 1)
		{
			int sum1 = b[j] + a[i];
			if(sum1 >= 10)
			{
				a[i-1]++;
			}
			a[i] = (a[i] + b[j])%10;
			i--;
			j--;
		}
		if( a[0] != 0)   printf( "%d",a[0]);
		for(int k = 1;k <= num1;k++ )    printf( "%d",a[k]);

	}
	else (i == j)
	{
		num1 = j;
		while( i >= 1)
		{
			int sum1 = b[j] + a[i];
			if(sum1 >= 10)
			{
				b[j-1]++;
			}
			b[j] = (b[j] + a[i])%10;
			j--;
			i--;
		}
		if(b[0] != 0)    printf( "%d",b[0]);
		for(int k = 1;k <= num1;k++ )    printf( "%d",b[k]);
	}*/
/*	else
	{
		num1 = j;
		while( i >= 1)
		{
			int sum1 = b[j] + a[i];
			if(sum1 >= 10)
			{
				b[j-1]++;
			}
			b[j] = (b[j] + a[i])%10;
			j--;
			i--;
		}
		if(b[0] != 0)    printf( "%d",b[0]);
		for(int k = 1;k <= num1;k++ )    printf( "%d",b[k]);

	}*/

/*
}

*/


#include<cstdio>
#include<cstring>
using namespace std;

int x[505];
int y[505];
int sum1[505];
int main( )
{
	int flag = 0;
	char a[505],b[505];
	scanf( "%s",a);
	int lena = strlen(a);
	getchar( );
	scanf( "%s",b);
	int lenb = strlen(b);
	for(int i = 0;i < lena;i++)
	{
		char c = a[i];
		int x[i] = c-48;
	}
	for(int i = 0;i < lenb;i++)
	{
		char c = b[i];
		int x[i] = c-48;
	}
	if(lena < lenb)  swap(lena,lenb);
	for(int i = lena;i >)


}
