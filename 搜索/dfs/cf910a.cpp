// 超时

#include <iostream>

using namespace std;

const int inf = 0x3f3f3f3f;
const int MAX = 100 + 10;
int book[MAX];
char a[MAX];
int n,m;
int min1 = 101;

inline int dfs(int sum,int num)
{
	if(min1 != 101) return 0;  //剪枝
//	cout << num << endl;
	cout << min1 << endl;
//	if(num >= min1) return 0;  //剪枝

	if((sum + m) >= (n-1))
	{
		num++;
		min1 = min(num,min1);

		return 1;
	}
	
	for(int i = sum + m;i >= sum + 1;i--)
	{
		if(num + 1 >= min1) continue;
		if(book[i] == 1) continue;
		if(a[i] == '1')
		{
			book[i] = 1;
			dfs(i,num + 1);
			book[i] = 0;
		}
	}

	return -1;
}

int main()
{
	cin >> n >> m;
	getchar();
	for(int i = 0;i < n;i++)	cin >> a[i];

	int flag = 0;
//	book[0] = 1;
	dfs(0,0);
	if(min1 == 101) cout << -1 << endl;
	else cout << min1 << endl;


	return 0;
}
