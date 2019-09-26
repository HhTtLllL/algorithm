#include <stdio.h>
#include <iostream>

using namespace std;

const int MAX = 100 + 10;
int a[MAX];

int main()
{
	int n;
	cin >> n;
	long long sum = 0;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
		sum += a[i];
	}

	long long aver = sum / n;

	int cnt = 0;
	for(int i = 1;i <= n;i++)
	{
		if((a[i] - aver)  != 0) //如果这一堆 的值 和平均数不同,则它一定要移动 
		{
			a[i + 1] += a[i] - aver;
			cnt++;
		}
	}

	cout << cnt << endl;


	return 0;
}
