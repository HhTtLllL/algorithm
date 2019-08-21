/*
 * 以x轴为分界，y>0部分为海，y<0部分为陆地，给出一些岛屿坐标（在海中），
 * 再给出雷达可达到范围，雷达只可以安在陆地上，问最少多少雷达可以覆盖所以岛屿。*/


#include<iostream>
#include<algorithm>
#include<cmath>
#define MAX 1005
using namespace std;

struct node
{
	double start;
	double end;
};

struct node a[MAX];

int cmp(struct node a,struct node b)
{
	if(a.end != b.end)  return a.end < b.end;
	else return a.start > b.start;
}

int main( )
{
	int n,radius;
	double tempx,tempy;
	int flag;        //判断是否存在雷达扫不到的岛屿
	int num = 1;   //用来记录个数,用于输出
	while(cin >> n >> radius && n != 0)
	{
		flag = 0;
		for(int i = 1;i <= n;i++)
		{
			cin >> tempx >> tempy;
			if(tempy > radius) flag = 1;
			a[i].start = tempx - sqrt((radius * radius *1.0) - (tempy * tempy*1.0));    
			a[i].end = tempx + sqrt((radius * radius *1.0) - (tempy * tempy*1.0));
		}

		if(flag == 1) 
		{
			cout << "Case " << num << ": -1" << endl;
			num++;
			continue;
		}

		sort(a+1,a+n+1,cmp);
		
		int cnt = 1;
		double temp = a[1].end;
		for(int i = 2;i <= n;i++)
		{
			if(a[i].start <= temp) continue;
			else 
			{
				cnt++;
				temp = a[i].end;
			}
		}
		cout << "Case " << num << ": " << cnt << endl;
		num++;
	}

	return 0;
}
