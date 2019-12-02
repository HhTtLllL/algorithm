#include <cstdio>

int san[15];
int a[20010];

void init()
{
	san[0] = 1;
	for(int i = 1;i <= 10;i++)
	{
		san[i] = 3 *san[i-1];
	}
}

int get(int n)
{
	for(int i = 10;i >= 0;i--)
	{
		if(n >= san[i]) n -= san[i];
	}
	if(n == 0) return 1;
	else return 0;
}

int main()
{
	init();
	int num = 1;
	for(int i = 1;i <= 20000;i++)
	{
		if(get(i))
		{
			a[num++] = i;
		}

	}

	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		for(int i = 0;i <600;i++)
		{
			if(a[i] >= n)
			{
				printf("%d\n",a[i]);
				break;
			}
		}
	}


}

