#include <string.h>
#include<stdio.h>

//#define ll long long
#define MOD 0x7FFFFFFF

#define  MAX  100010

long long fronta[MAX];
char a[25][MAX];
int seed = 133331;

int front_hash(char s[])
{
	unsigned int hash = 0;
	int i = 0;
	while(s[i]) hash = hash * seed + s[i++];

	return (hash & MOD);
}



int main()
{
	char temp[MAX];
	int num[25];
	int n,m;
	scanf("%d%d",&n,&m);

	getchar();
	for(int i = 0;i < n;i++)
	{
		gets(a[i]);
		num[i] = front_hash(a[i]);
	}
	int temp1;
	int sum = 0;
	for(int i = 0;i < m;i++)
	{
		gets(temp);
		temp1 = front_hash(temp);
		for(int i = 0;i < n;i++)
		{
			if(num[i] == temp1) sum++;
		}
	}

	printf("%d\n",sum);
	
	return 0;
}
