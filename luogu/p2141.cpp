#include<iostream>
#include<set>
#include<algorithm>

using namespace std;
set<int> a1;
set<int> a2;    // 因为 +法 后 可能产生重叠 的数,所以要用 set 取存放
int num[105];
int main( )
{
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		cin >> num[i];
		a1.insert(num[i]);
	}

	for(int i = 1;i <= n;i++)
	{
		for(int j = i+1;j <= n;j++)
		{
			int temp = num[i] + num[j];
			set<int>::iterator it = a1.find(temp);
			if(it != a1.end( ))   a2.insert(*it);
		}
	}


	cout << a2.size() << endl;

	return 0;
}
