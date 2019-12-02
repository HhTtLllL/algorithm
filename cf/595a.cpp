#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

const int MAX = 1e7;
int a[MAX];

int main()
{
	int t;
	scanf("%d",&t);
	int sum = 0;
	while(t--)
	{
		int n;
		scanf("%d",&n);
		for(int i = 1;i <= n;i++) scanf("%d",&a[i]);
		if(n == 1) 
		{
			printf("%d\n",1);
			continue;
		}

		sort(a + 1,a + 1 + n);
		int num = 0;
		for(int i = 1;i <= n;i++)
		{
			if(a[i] == -1) continue;
			num++;
			int temp = a[i];
			a[i] = -1;
			for(int j = i+1;j <= n;j++)
			{
				if(a[j] == -1) continue;
				if(abs(temp - a[j]) > 1)
				{
					temp = a[j];
					a[j] = -1;
				}
				/*if(a[j] == -1) continue;
				if(abs(a[i] - a[j]) > 1)
				{
					num++;
					a[i] = -1;
					a[j] = -1;
				}*/
			}
		}
		printf("%d\n",num);
	}

}

