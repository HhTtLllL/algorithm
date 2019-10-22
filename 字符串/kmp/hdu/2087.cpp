#include <cstdio>
#include <cstring>

int next[1000010];
char a[1000010];   //模板串
char b[1000010];   //文本串

int m;

void getnext()
{
	int i,j;
	j = next[0] = -1;
	i = 0;
	while(i < m)
	{
		while(-1 != j && a[i] != a[j]) j = next[j];
		next[++i] = ++j;
	}
}

int kmp()
{
	int i = 0,j = 0;
	int num = 0;
	int len1 = strlen(a);
	int len2 = strlen(b);
	while(i < len2)
	{
		if(j == -1 || b[i] == a[j]) 
		{
			i++;
			j++;
		}
		else j = next[j];
		if(j == len1)  //如果找到一个串
		{
			num++;
			j = 0;
		//	j = next[j];   //回溯
		}
	}
	return num;
}




int main()
{
	while(1)
	{
		scanf("%s",b);
		getchar();
		if(b[0] == '#') break;
		scanf("%s",a);
		getchar();
		m = strlen(a);
		getnext();

		printf("%d\n",kmp());

	}

	return 0;
}
