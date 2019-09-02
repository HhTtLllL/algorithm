#include<cstdio>
#include<cmath>

const int maxn = 1000 + 10;
const int maxm = 1000 + 10;

int n,k,m;
double p[maxn],f[maxm];

// f[i] 为第i天存活的概率
// p 为


int main()
{
	int t;
	scanf( "%d",&t);

	for(int kase = 1;kase <= t;kase++)
	{
		scanf( "%d%d%d",&n,&k,&m);
		for( int i = 0;i < n;i++)  scanf( "%lf",&p[i]);
		f[0] = 0; f[1] = p[0];
		for( int i = 2;i <= m;i++)
		{
			f[i] = 0;
			//这个麻球生了 j 个后代,在i - 1 天后全部死亡的概率
			for(int j = 0;j < n;j++) f[i] += p[j] * pow(f[i - 1],j); 
								//j 个后代每个死亡的概率都为 f[i - 1],则j个后代全部死亡的概率为 pow(f[i- 1],j);
		}

		printf("Case #%d: %.7lf\n",kase,pow( f[m],k));
	}

	return 0;
}
