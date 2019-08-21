
/*Farmer John建造了一个有N(2<=N<=100,000)个隔间的牛棚，这些隔间分布在一条直线上，坐标是x1,...,xN (0<=xi<=1,000,000,000)。

他的C(2<=C<=N)头牛不满于隔间的位置分布，它们为牛棚里其他的牛的存在而愤怒。为了防止牛之间的互相打斗，Farmer John想把这些牛安置在指定的隔间，所有牛中相邻两头的最近距离越大越好。那么，这个最大的最近距离是多少呢？

*/


#include<iostream>
#include<algorithm>

using namespace std;

int a[100005];
int judge(int);
int n,flag;

int main( )
{
	cin >> n >> flag;    //flag  为要分开的牛的个数  

	for(int i = 1;i <= n;i++)  cin >> a[i];

	sort(a+1,a+n+1);

	int l = 0,r = 1000000;
	while(l+1 < r)  
	{
		int mid = (l+r) >> 1;   
		if(judge(mid))
		{
			l = mid;
		}
		else 
		{
			r = mid;
		}
	}

	cout << l << endl;
}

int judge(int temp)  //从第一头牛开始遍历,以temp 为间隔,如果能放下,这个temp 就可以
{
	int r = a[1],cnt = 1;

	for(int i = 2;i <= n;i++)
	{
		if(a[i] - r >= temp)
		{
			cnt++;
			r = a[i]; //更新上一头牛的位置
			if(cnt == flag)  return 1;
		}
	}

	return 0;  //无法实现
}


