#include <cstdio>
#include <cstring>

const int maxn = 1e6 + 10;
char a[maxn];
int next[maxn];
int n;

void getnext(int n)
{
	int i,j;
	j = next[0] = - 1;
	i = 0;
	while(i < n)
	{
		while(-1 != j && a[i] != a[j]) j = next[j];
		next[++i] = ++j;
	}
}
int main()
{
	int time = 1;
	while(scanf("%d",&n) != EOF && n != 0)
	{
		getchar();
		scanf("%s",a);
		getnext(n);
		printf("Test case #%d\n",time);
		for(int i = 1;i <= n;i++)
		{
			int ans = 1;
			if(i % (i - next[i]) == 0)
			{
				ans = i/(i - next[i]);
			}
			if(ans != 1)
			printf("%d %d\n",i,ans);
		}
		printf("\n");

		time++;
	}



	return 0;
}

