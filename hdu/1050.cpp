#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
int room[405];

int main( )
{
	int t;
	int n;

	cin >> t;
	while(t--)
	{
		cin >> n;
		int a,b,temp;
		memset(room,0,sizeof(room));

		while(n--)
		{
			cin >> a >> b;
			if(a > b)
			{
				temp = a;
				a = b;
				b = temp;
			}
			if(a%2 == 0)  a--;
			if(b%2 == 1)  b++;

			for(int i = a;i <= b;i++)
			{
				room[i] +=10;
			}
		}

		printf("%d\n",*max_element(room,room+400));

	}
}
