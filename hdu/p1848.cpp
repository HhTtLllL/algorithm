//尼姆博弈 + sg函数
#include<cstdio>
#include<cstring>
#define N 20
#define MAX 10005

using namespace std;

void getSG(int n);
int f[N],SG[MAX],mex[MAX];
//f[N] : 可改变当前状态的方式，N为方式的种类，f[N]要在getSG之前先预处理  f[N] 为 下一步能走到的地方
//SG[] : 0~n的SG函数值
//mex[]  : 为x后继状态的集合   最小排除量  的 集合   
int main( )
{
	int n,m,k;
	f[0] = f[1] = 1;
	for(int i = 2;i <= 16;i++)   f[i] = f[i-1] + f[i-2];

	getSG(1000);

	while(scanf( "%d%d%d",&n,&m,&k) && n && m && k)
	{
		if(SG[n]^SG[m]^SG[k])  printf( "Fibo\n");
		else printf( "Nacci\n");
	}


	return 0;
}

void getSG(int n)
{
	memset(SG,0,sizeof(SG));

	//因为 SG[0] 始终等于0 ,所以 i 从 1 开始
	for(int i = 1;i <= n;i++)  //  每一个 SG 值 都要通过 前面的 SG 计算,从前往后算
	{             // n  代表 共有 n 个数,即 要算 n 个 SG 值
   
		memset(mex,0,sizeof(mex));   //每次都要将上一状态的后继 集合 重置            
		
		for(int j = 0;f[j] <= i && j <= N;j++)  
		{
			mex[SG[i-f[j]]] = 1;//将后继状态的SG函数值进行标记
		}
		int j = 0;
		while(true)
		{
			if(!mex[j])
			{
				SG[i] = j;
				break;
			}

			j++;
		}
	/*	for(int j = 0;;j++)   //查询当前后继状态SG值中最小的非零值
		{
			if(!S[j])
			{
				SG[i] = j;
				break;
			}
		}*/
	}
}



