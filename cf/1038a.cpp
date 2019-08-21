#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>

using namespace std;

const int maxn = 100010;

char s[maxn];
int a[30];

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    scanf("%s", s); 
    for(int i = 0; i < n; i++)
        a[s[i] - 'A']++;
    int ans = a[0];
    for(int i = 0; i < k; i++)
        ans = min(ans, a[i]);
    printf("%d\n", ans * k); 
    return 0;
}
   
