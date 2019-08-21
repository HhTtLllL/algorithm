#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll maxn=500010;
const ll INF=2147483647;
ll n,a[maxn],cnt,b[maxn],tot,icnt;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]==2)cnt++;
    }
    icnt=n-cnt;
    if(icnt>=1)
    {
        if(cnt)
        {
            cnt--;
            icnt--;
            b[++tot]=2;
            b[++tot]=1;
            for(int i=1;i<=cnt;i++)b[++tot]=2;
            for(int i=1;i<=icnt;i++)b[++tot]=1;
        }
        else
        {
            for(int i=1;i<=icnt;i++)b[++tot]=1;
        }
    }
    else
    {
        for(int i=1;i<=cnt;i++)b[++tot]=2;
    }
    for(int i=1;i<=tot;i++)cout<<b[i]<<" ";
    return 0;
}
