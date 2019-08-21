#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int a[1005];

int main( )
{
	int n,k;
	cin >> n >> k;
	int temp;
	for(int i = 1;i <= n;i++)
	{
		cin >> temp;
		a[temp]++;
	}

	int sum = 0;
	for(int i = 1;i <= k;i++)   sum +=(a[i]/2);   //计算满足 2 份的

	if(n % 2 == 0)  n /= 2;
	else n = (n/2)+1;


	if(n == sum)    
	{
		sum *= 2;
		cout << sum << endl;  //没份都是偶数  
	
	}
	else 
	{
		sum = ((n-sum) + 2*sum);    //单份 + 双份  
		cout << sum << endl;
	}



	return 0;
}
