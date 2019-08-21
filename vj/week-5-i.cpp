#include<cstdio>
#include<algorithm>
#define M 30

using namespace std;

int a[M];
int dp[M];
// 未遍历  前的 dp[i] 为单个数字 作为 一个子串
//遍历 后  dp[i]  为 前 i 个数字的 最长递减子序列 的个数
int main( )
{
	int n;
	scanf( "%d",&n);

	for(int i = 1;i <= n;i++)
	{
		scanf( "%d",&a[i]);
		dp[i] = 1;//初始化为　１，因为每一个数字都能单独作为　递减　一个子串　
	}

	for(int i = 2;i <= n;i++)   //计算 从第 1 个数字到 第 i 个数字 的最长递减 子序 的个数
	{
		for(int j = i - 1;j >= 1;j--)
		{
			if(a[j] >= a[i])
			{
				dp[i] = max(dp[i],dp[j] + 1);   //dp[j] + 1  前 j 个数字 的 最长递减子序列  加上 第 i 个数字作为一个 新的最长递减子序列            
			}
		}
	}

	printf( "%d\n",*max_element(dp+1,dp+n+1)); //*max_element  找出数组中最大的一个　　　　　　*min_element 找出数组中最小的以为
}
