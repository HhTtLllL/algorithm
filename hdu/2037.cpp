/*
 * “今年暑假不AC？” 
“是的。” 
“那你干什么呢？” 
“看世界杯呀，笨蛋！” 
“@#$%^&*%...” 

确实如此，世界杯来了，球迷的节日也来了，估计很多ACMer也会抛开电脑，奔向电视了。 
作为球迷，一定想看尽量多的完整的比赛，当然，作为新时代的好青年，你一定还会看一些其它的节目，比如新闻联播（永远不要忘记关心国家大事）、非常6+7、超级女生，以及王小丫的《开心辞典》等等，假设你已经知道了所有你喜欢看的电视节目的转播时间表，你会合理安排吗？（目标是能看尽量多的完整节目） 
 */

#include<iostream>
#include<algorithm>
#define MAX 105

using namespace std;

struct node
{
	int start;
	int end;
};
struct node a[MAX];

int cmp(struct node a,struct node b)
{
	return a.end < b.end;
}

int main( )
{
	int n;
	while(cin >> n && n != 0)
	{
		for(int i = 1;i <= n;i++)  cin >> a[i].start >> a[i].end;

		sort(a+1,a+n+1,cmp);
		int cnt = 1;
		int temp = a[1].end;
		for(int i = 2;i <= n;i++)
		{
			if(temp <= a[i].start)
			{
				cnt++;
				temp = a[i].end;
			}
		}

		cout << cnt << endl;
	}
}
