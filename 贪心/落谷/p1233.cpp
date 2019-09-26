#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 5000 + 10;
struct node
{
	int l;
	int w;
};
bool cmp(node x,node y)
{
	if(x.l == y.l)	return x.w > y.w;
	else return x.l > y.l;
}

int book[MAX];
struct node a[MAX];


int main()
{
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i].l >> a[i].w;
	}
	
	sort(a + 1,a + n + 1,cmp);
	int cnt = 0;
	int cnt2 = 0;
	int sum = 0;
	int bw = 0;

	for(int i = 1;i <= n;i++)
	{
		if(book[i] == 0)
		{
			bw = a[i].w;
			for(int j = i + 1;j <= n;j++)
			{
				{
					if(book[j] == 0)
					{
						cnt++; //不能从下面开始加, 如果只有一个 木块单独 为一次,就不进去
						if(bw >= a[j].w) 
						{
	//						cnt++;
							bw = a[j].w;
							book[j] = 1;
						}
					}
				} 
//				else break;
			}
		}
	//	cout << " cnt = " << cnt << endl;
		/*if(cnt != cnt2)
		{
			sum++;
			cnt2 = cnt;
		}*/
	}

	for(int i = 1;i <= n;i++) 
	{
		if(book[i] == 0) sum++;
	}

	cout << sum << endl;


	return 0;
}
