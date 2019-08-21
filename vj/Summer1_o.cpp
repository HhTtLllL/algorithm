#include<iostream>
#include<algorithm>
#include<stdlib.h>

using namespace std;

int main()
{
	int n,len;
	while(~(scanf( "%d%d",&n,&len)))
	{
		int ans = 0;
		for(int i = 1;i <= n;i++)
		{
			int x,y;
			cin >> x >> y;
			ans ^=(abs(x-y) - 1);
		}
		if(ans)    cout << "I WIN!" << endl;
		else cout << "BAD LUCK!" << endl;
	}

	return 0;
}
