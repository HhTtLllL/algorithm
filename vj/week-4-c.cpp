#include<cstdio>

using namespace std;

int judge[400005];	//保存   这个数是否为素数     
int prime[400005];    //用来保存已经找到的素数 
long long y;
long long  e;
int judge2(void);
int main()
{
	
	judge2();
	long long n;
	scanf("%lld",&n);
	long long  temp;
	for(int i = 0;i < n;i++)
	{
		scanf("%lld",&temp);
		if(temp == 1)	y++;
		else	e++;
	}
	int i = 1;
	while(e != 0 || y != 0)
	{
//		int temp;


		if((prime[i] - prime[i-1]) %2 == 0)
		{
			temp = prime[i] - prime[i-1];
			while(temp != 0 && e != 0)
			{
				temp -= 2;
				printf("2 ");
				e--;
			}
			if(temp == 0)	continue;
		//	if(e == 0)	break;
		}
		
		
		if((prime[i] - prime[i-1]) %2 == 1)
		{
			temp = prime[i] - prime[i-1];
			while(temp != 1 && e != 0)
			{
				temp -= 2;
				printf("2 ");
				e--;
			}
			if(temp == 1)
			{
				temp -=1;
				printf("1 ");
				y--;
			}
		//	if(y == 0)	break;		
		}
		i++; 
		if(e == 0)
		{
			while(y != 0)
			{
				if(y == 1)
					printf("1");
				else    printf( "1 ");
				y--;
			}
		}
		if(y == 0)
		{
			while(e != 0)
			{
				if( e == 1)
					printf("2");
				else
					printf( "2 ");
				e--;
			}
		}
	}
	
	return 0;
	
}
int judge2(void)
{
	int count = 0;
	for(int i = 2;i <= 400000;i++)
	{
		if(!judge[i])
		{	
			prime[count] = i;
//			s.insert(i);
			count++;
		}
		for(int j = 0;j < count && i*prime[j] <= 400000;j++)
		{
			judge[i*prime[j]] = 1;
		  	if(i % prime[j] == 0)	break;

		}
		 	
	}
	return 0;
}














