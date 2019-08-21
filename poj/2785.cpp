/*
 *
SUM问题可以表述如下：给定四个列表A，B，C，D的整数值，
计算多少个四元组（a，b，c，d）∈Ax B x C x D是这样的
a + b + c + d = 0。
在下文中，我们假设所有列表都具有相同的大小n。
*/



#include<iostream>
#include<algorithm>

using namespace std;

int a[4005];
int b[4005];
int c[4005];
int d[4005];

int sum1[4005*4005];
int sum2[4005*4005];

int main( )
{
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++)  cin >> a[i] >> b[i] >> c[i] >> d[i];
	
	for(int i = 1;i <= n;i++)  //将a[i] + b[i] 相加,c[i]+ d[i]相加,
	{
		for(int j = 1;j <= n;j++)
		{
			sum1[(i-1)*n+j] = a[i]+b[j];
			sum2[(i-1)*n+j] = c[i]+d[j];
		}
	}
	
	sort(sum1+1,sum1+(n*n)+1);
	sort(sum2+1,sum2+(n*n)+1);
	//排序后 在sum2 中找sum1的相反数,和就为0
	int sum = 0;
	int count = 0;
	for(int i = 1;i <= n*n;i++)  //判断相反数
	{
		sum = ((upper_bound(sum2+1,sum2+(n*n+1),-sum1[i])) - (lower_bound(sum2+1,sum2+(n*n)+1,-sum1[i])));
		count += sum;
	}

	cout << count << endl;

}
