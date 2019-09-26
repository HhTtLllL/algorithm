#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n[]={1,4,22,3,8,5};
	int len=sizeof(n)/sizeof(int);
	cout<<(max_element(n,n+len) - n)<<endl;
	cout<<*min_element(n,n+len)<<endl;
	return 0;
}
