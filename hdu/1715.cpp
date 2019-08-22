#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int a[1005][605];
int n;
void add()
{
	a[1][600] = 1;
	a[2][600] = 1;
	int temp2 = 0,temp = 0;
	for(int i = 3;i <= 1000;i++)
	{
		for(int j = 600;j >= 1;j--)
		{
			temp += a[i-1][j] + a[i-2][j];

			if(temp >= 10)
			{
				temp2 = 1;
			}
			else temp2 = 0;
			a[i][j] = temp%10;
			temp = temp2;	
		}

	}
	

}
void print(int m)
{
	int flag = 0;
	for(int i = 1;i <= 600;i++)
	{
		if(a[m][i] != 0)   flag = 1;
		if(flag == 1) printf("%d",a[m][i]);
	}
	printf("\n");
}

int main()
{
	int t;
	add(); 
	cin >> t;
	while(t--)
	{
		cin >> n;
		print(n);
	}
	
	
	return 0;
}
