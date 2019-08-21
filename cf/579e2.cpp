#include <iostream>
#include <set>
#include <algorithm>
#include<cstdio>

using namespace std;

int a[150010];
int main()
{
    set<int> q;

    int n;

    scanf( "%d",&n);
    
    for(int i = 0;i < n;i++)    scanf( "%d",&a[i]);
    
    sort(a,a+n);

    for(int i = 0;i < n;i++)
    {
        if(a[i] - 1 == 0 && q.count(a[i]) == 0)
	{
		q.insert(a[i]);
	}
	else if(a[i] - 1 == 0 && q.count(a[i] != 0)) 
	{
		q.insert(a[i]+1);
	}
	else
	{
            if(q.count(a[i]-1) == 0)
	    {
		    q.insert(a[i]-1);
	    }
	    else if(q.count(a[i]) == 0) 
	    {
		    q.insert(a[i]);
	    }
	    else q.insert(a[i]+1);
        }
    }

    cout << q.size() << endl;

    return 0;
}
