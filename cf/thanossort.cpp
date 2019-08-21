#include<cstdio>
#include<algorithm>

using namespace std;
int a[20];
int length[20];
bool judge(int x,int y);
int dfs(int x,int y);
int main( )
{
	int n;
	scanf( "%d",&n);
	for(int i = 1;i <= n;i++)   scanf( "%d",&a[i]);
	
	int m = dfs(1,n);
	

	printf( "%d\n",m);
}

int dfs(int x,int y)
{
	int mid = (x + y -1) / 2;
//	if(mid == 1)   return 1;
	if(is_sorted(a + x,a + y+1))   return y-x+1;
	else
	{
		int m = max(dfs(x,mid),dfs(mid+1,y));
		return m;
	}
}
