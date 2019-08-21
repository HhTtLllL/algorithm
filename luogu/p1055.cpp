#include<cstdio>
#include<iostream>

using namespace std;

char a[15];
int b[15];
int main( )
{
	int j = 1;
	for(int i = 1;i <= 13;i++)
	{

		scanf( "%c",&a[i]);
		if(a[i] != '-')
		{
			b[j] = a[i] - 48;
			j++;
		}
	}
	int temp = 0;
	for( int i = 1;i <= 9;i++)
	{
		temp = (temp + b[i]*i)%11;
	}
	int i = 1;
	j = 1;
	if(temp != 10) 
		if(b[10] == temp)   cout << "Right" << endl;
		else 
		{
			b[10] = temp;
			for(int k = 1;k <= 13;k++)
			{
	
				if( i != 2 && i != 6 && i != 12)
				{
					printf( "%d",b[j]);
					j++;
					i++;
				}
				else
				{
					printf( "-");
					i++;
				}

			}
		}
	else 
		if( a[13] == 'X')    cout << "Right" << endl;
		else 
		{
			for(int k = 1;k <= 12;k++)
			{
	
				if( i != 2 && i != 6 && i != 12)
				{
					printf( "%d",b[j]);
					j++;
					i++;
				}
				else
				{
					printf( "-");
					i++;
				}

			}
			printf( "X");
		}



}
