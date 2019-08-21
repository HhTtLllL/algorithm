#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;

int main( )
{
	int len,num,p,maxv = 0,minv = 0;
	scanf("%d%d",&len,&num);
	for(int i = 1;i <= num;i++)
	{
		scanf("%d",&p);
		maxv = max(maxv,max(len-p+1,p));
		minv = max(minv,min(len-p+1,p));
	}

	printf( "%d %d",minv,maxv);
	return 0;
}
