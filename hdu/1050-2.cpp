#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;
struct node
{
	int start;
	int end;
};
struct node a[205];
/*int cmp(struct node a,struct node b)
{
	return a.end < b.end;
}*/
int cmp(struct node a,struct node b)
{
	//if(a.end != b.end)
	{
		return a.end < b.end;
	}
	//else
	{
	//	return a.start < b.start;
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int left,right;
		memset(a,0,sizeof(a));
		for(int i = 1;i <= n;i++)
		{
			cin >> left >> right;
			if(left > right)
                        {   
                                int temp = left;
                                left = right;
                                right = temp;
                        }   
			if(left%2 == 0)  left--;
                        if(right%2 == 1)  right++;
			a[i].start = left;
			a[i].end = right;
			
		}
		sort(a+1,a+n+1,cmp);
		int ans = 1;
		int temp = a[1].end;
		int sum = 1;
		
		for(int i = 2;i <= n;i++)
		{
			if(temp > a[i].start)
			{
				sum++;
				ans = max(ans,sum);
			}
			else
			{
				if(sum != 1)
				{
					temp = a[i-1].end;
					i--;
					//if(sum != 1)	i--;
				}//
				else
				{
					temp = a[i].end;
				}
				sum = 1;
			}
		}


		printf( "%d\n",ans*10);
	}
}
