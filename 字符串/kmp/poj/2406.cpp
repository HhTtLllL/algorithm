#include <cstdio>
#include <cstring>

const int maxn = 1e7 + 10;
char a[maxn];
int next[maxn];

void getnext(int n)
{
	int i,j;
	j = next[0] = -1;
	i = 0;
	while(i < n)
	{
		while(-1 != j && a[i] != a[j]) j = next[j];
		next[++i] = ++j;
	}
}
int main()
{
	while(scanf("%s",a) == 1 && a[0] != '.')
	{
		int len = strlen(a);
		getnext(len);
		int ans = 1;

		if(len%(len - next[len]) == 0) 
		{
			ans = len/(len - next[len]);
		}
		printf("%d\n",ans);

	}

	return 0;
}
