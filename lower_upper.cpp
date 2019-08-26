#include<iostream>
#include<algorithm>

using namespace std;
//这两个函数返回的是数组的下标
int main( )
{
	int a[] = {1,2,3,4,4,4,5,6};

	int i = lower_bound(a,a+8,4)-a;
	cout << i << endl;
	i = upper_bound(a,a+8,4)-a;
	cout << i << endl;
}
