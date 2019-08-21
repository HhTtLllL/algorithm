#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int MAX = 1e6+10;
const int INF = 0x3fffffff;
int n,c;
int w[MAX];
int v[MAX];
int f[MAX];
int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        memset(f,0,sizeof(f));
        for(int i = 0;i < n;i++)
        {
            scanf("%d%d",&v[i],&w[i]);
        }
        scanf("%d",&c);
        for(int i = 0;i < n;i++)
        {
            for(int j = w[i];j <= c;j++)
            {
                f[j]=max(f[j],f[j-w[i]] + v[i]);
            }
        }
        printf("%d\n",f[c]);
    }
    return 0;
}
