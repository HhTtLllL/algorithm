#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

const int MAX = 1e7 + 10;
char temp[MAX];
char a1[MAX];
long long next1[MAX];

void getnext(int len)
{
	int i,j;
	j = next1[0] = -1;
	i = 0;
	while(i < len)
	{
		while(-1 != j && a1[i] != a1[j]) j = next1[j];
		next1[++i] = ++j;
	}
}


int main()
{
	long long  a,b;

	while(~scanf("%lld%lld\n",&a,&b))
	{
		scanf("%s",temp);
		int len = strlen(temp);
		int i = len - 1,j = 0;
		while(temp[i] != '.')
		{
			a1[j++] = temp[i--];
		}
	
		getnext(j);
	
		long long ans = -1e18;
	
		for(int i = 0;i <= j;i++)
		{
			ans = max(ans,((a*i) - (b*((long long)i - next1[i]))));
		}
	
		printf("%lld\n",ans);
	}
	return 0;
}
