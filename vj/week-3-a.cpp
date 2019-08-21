#include<cstdio>
#include<algorithm>
#include<cstring>

#define ll long long

using namespace std;

ll n,m;
ll pre[100005],a[100005];
ll find(ll x);
int join(ll x,ll y);
int main( )
{
	ll x,y;
	scanf( "%lld%lld",&n,&m);

	for(ll i = 1;i <= n;i++)   pre[i] = i;   //初始化  让 pre[i]  等于 i  ,因为每一个点都可以作为根

	for(ll i = 1;i <= n;i++)  scanf( "%lld",&a[i]);

	for(ll i = 1;i <= m;i++)
	{
		scanf( "%lld%lld",&x,&y);
		join(x,y);
	}

	for(ll i = 1;i <= n;i++)   a[find(i)] = min(a[find(i)],a[i]);   //因为 要求 的是最小代价,则令 最小的价值作为根,然后通过 根 在向下传播

	ll sum = 0;                  //只算 每一个 根的值
	for(ll i = 1;i <= n;i++)   if(i == find(i))  sum += a[i];

	printf( "%lld\n",sum);

	return 0;

}

ll find(ll x)   // 找到这个结点的上一个结点    (找到这个结点的根结点)
{

	ll temp = x;
	while(temp != pre[temp])
	{
		temp = pre[temp];
	}

	return temp;
	/*if(x == pre[x])  return x;
	else
	{
		pre[x] = find(pre[x]);
		return pre[x];
	}*/
}

int join(ll x,ll y)
{
	ll tx = find(x);    //找到 x 的根
	ll ty = find(y);    //找到 y 的根 

	if(tx != ty)  //如果 x和 y 的 不是同一个根
	{
		pre[ty] = tx;  //将 x 的根 连接到 y 的根上
		return 1;
	}

	return 0;
}
