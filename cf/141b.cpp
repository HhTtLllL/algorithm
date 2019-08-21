#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int  a,x,y;
	cin >> a >> x >> y;
	int k = x;
	int sum = 0;
	x = fabs(x);

	if(x < a)
	{
		int p = y/a;
		if(p * a == y)    //纵坐标 为整数
		{
			cout << -1 << endl;
			return 0;
		}
		
		if(p == 0)   //判断第一层
		{
			if(x*2 < a) sum = 1;
			else sum = -1;

			cout << sum << endl;
			return 0;
		}
		if(p %2 == 0)
		{
			if(k == 0)
			{
				cout << -1 << endl;
				return 0;
			}
			if(k < 0)  sum = p/2*3;
			else       sum = p/2*3 +1;

		}
		else
		{
			if(x*2 < a)  sum =(p+1)/2*3 - 1;
			else sum = -1;
		}
	}
	else 
	{
		cout << -1 << endl;
		return 0;

	}
	
	cout << sum << endl;
	return 0;
}
