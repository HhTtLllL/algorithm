// 裸 巴什博弈  

#include<cstdio>

using namespace std;

int main( )
{
	int t;
	scanf( "%d",&t);

	while(t--)
	{
		int n,m;
		scanf( "%d%d",&n,&m);
		int mod = n%(m+1);
		//如果  mod == 0时,先手必败.
		//若先手 取 k 个,则 后手只需取走(m+1 - k)   
		//若  mod != 0 时 ,先手只需取 mod 个,
		//后手就面临  mod == 0;则 后手必败
		if(mod == 0)   printf( "second\n");
		else   printf( "first\n");
	}
}
