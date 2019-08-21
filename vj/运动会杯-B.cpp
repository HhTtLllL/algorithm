#include<cstdio>
int a[100005];
int main( )
{
	int n,i;
	int m = 1;
	scanf( "%d",&n);
	int len,time;
	while(n >= 1)
	{
		scanf( "%d%d",&len,&time);
		int left[100005] = {0};
		int right[100005] = {0};
		len = len*100;
		int r = 1,l = 1;
		for(i = 1;i <= time;i++)
		{

			int temp;
			char name[6];
			scanf( "%d%s",&temp,name);
			if(name[0] == 'l')
			{
				if(left[l] + temp <= len)	left[l] += temp;
				else
				{
					l++;
					left[l] = temp;
				}
			}
			if(name[0] == 'r')
			{
				if(right[r] + temp <= len)	right[l] += temp;
				else
				{
					r++;
					right[r] = temp;
				}
			}
		}
		if(l == r)    a[m] = 2*l;
		if(l > r)    a[m] = 2*l-1;
		if(r > l)    a[m] = 2*r;
		n--;
		printf("%d\n",a[m]);
	}

	 
}
