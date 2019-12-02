#include <cstdio>
#include <cstring>

using namespace std;

const int MAX = 2e5 + 10;
int a[MAX];
int b[MAX];

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		memset(b,0,sizeof(b));
		scanf("%d",&n);
		for(int i = 1;i <= n;i++)  scanf("%d",&a[i]);
		int num = 1;
		
		for(int i = 1;i <= n;i++)
		{
			if(b[i] != 0) continue;
			int num = 1;
			int temp = i;
			while(i != a[temp])
			{
				temp = a[temp];
				num++;
			}
			b[i] = num;
			if(i == a[a[i]]) b[a[i]] = num;
		}

		for(int i = 1;i <= n;i++) 
		{
			printf("%d ",b[i]);
		}
		printf("\n");
	}

}
