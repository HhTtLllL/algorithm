

 //朴素求法    O(n2)
/*
#include<cstdio>
#include<algorithm>
using namespace std;

int a[100005];
int dp[100005];
int main( )
{
	int n;
	scanf( "%d",&n);

	for(int i = 1;i <= n;i++)
	{
		scanf( "%d",&a[i]);
		dp[i] = 1;
	}

	for(int i = 2;i <= n;i++)
	{
		for(int j = i-1;j >= 1;j--)
		{
			if(a[j] <= a[i])
			{
				dp[i] = max(dp[i],dp[j] + 1);
			}
		}
	}*/
/*	for(int i = 1;i <= n;i++)   printf( "%d ",dp[i]);

	printf( "\n");*/
/*	printf( "%d\n",*max_element(dp+1,dp+n+1));
}

*/
// 二分优化,O(nlogn)
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

int a[100005];  
int lis[100005];     //用来存  上升 序列 

int main()
{
    int n;
    int count = 1;
    scanf( "%d",&n);

    memset(a,0,sizeof(a));
    memset(lis,0,sizeof(lis));

    for(int i = 1;i <= n;i++)  scanf("%d",&a[i]);
   
    lis[count] = a[1];    //将 第一个数 存进 s 数组                                                                                                                                                                
    // 因为 每操作 一次 的结果都是 最长 且 最小 的子序列,所以 是不会漏掉 任何一个数的
    for(int i = 2;i <= n;i++) // 第一个数已经判断过
    {   
        if(a[i] > lis[count])    //如果a[i]  > lis 的最后一个数字,就将 a[i] 存进 lis 数组
        {     //如果要求 最长 不下降子序  则 将 这里  >  换成 >= 即可
                count++;
                lis[count] = a[i];
        }
        else     
        {                                                                 //lower_bound   内部是用 二分 实现的
            int temp = lower_bound(lis + 1,lis + count + 1,a[i]) - lis;//  在lis中  找到 第一个大于等于a[i]的   地址
            lis[temp] = a[i];      // 将 找到的这个数  替换为 a[i]  
        }
                //所以最后  lis 数组存放的也就是 最长 且 最小 的上升子序列
    }   

    printf("%d\n",count);

    return 0;
}


