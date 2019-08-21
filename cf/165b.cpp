/* 给定代码任务为 n 行,其实代码书写能力为 v 行,然后每经过一次 除以 k ,当v变为 0时,看是否能完成代码任务 n ,并求出最小的v*/


#include<iostream>

using namespace std;

int n,k;
int judge(int);
int main( )
{
	cin >> n >> k;
	int l = 1;
	int r = n;
	while(l < r)
	{
		int mid = (l+r) >> 1;
		if(judge(mid)) r = mid;
		else l = mid +1;
	}

	cout << l << endl;
}

int judge(int temp)   //判断temp是否可以满足工作量
{
	int sum = temp;
	while(temp)
	{
		sum += (temp/k);
		temp /=k;
	}

	if(sum >= n) return 1;
	else return 0;
}

