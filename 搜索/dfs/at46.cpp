#include <iostream>
#include <algorithm>

using namespace std;

int next1[10] = {0,1,-1,5,-5,10,-10};
int min1 = 0x3f3f3f3f;
int n,m;
inline int dfs(int sum,int num);
int v[100];

int main()
 {
	cin >> n >> m;


	//for(int i = 1;i <= 6;i++)
//	{
		dfs(n,0);
//	}

	cout << min1 << endl;


	return 0;
}

inline int dfs(int sum,int num)
 {
	if(sum > 40 || sum < 0 || v[sum] == 1) return 0; //剪枝
	
	if(num > min1) return 0; //如果更新的次数 大于 目前最小的次数时 退出

	if(sum == m)
	{
		min1 = min(num,min1);
		return 0;
	}
//	if(num > 50) return 0;
	v[sum] = 1;  //标记
	for(int i = 6; i >= 1;i--)
	{
	//	cout << num << endl;
		dfs(sum + next1[i],num + 1);
	}
	v[sum] = 0;

	return 0;
}
