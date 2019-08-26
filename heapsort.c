#include<stdio.h>

// 用数组 模拟二叉树
int h[101];   //用来存放堆的数组
int n;  //存储 堆 中的元素个数

void swap(int x,int y)
{
	int temp = h[x];
	h[x] = h[y];
	h[y] = temp;
	
	return ;
}

void siftdown(int i)   //向下调整
{
	int t;  //记录当前最大值
	int flag = 0;   //判断是否需要继续向下调整

	while(i * 2 <= n)
//	while(i * 2 <= n && flag == 0)
	{
		//判断和左儿子的关系
		if(h[i] < h[i*2])  t = i*2;
		else t = i;

		//如果有 右儿子,
		if(i*2+1 <= n)
		{
			if(h[t] < h[i*2+1])    t = i*2+1;
		}

		if(t != i)
		{
			swap(t,i);
			i = t;   //更新 i 为刚才与它交换的儿子结点的编号,便于向下调整
		}
		else break;
		/*else
		{
			flag = 1;  //否则 说明当前的父节点 已经比两个子节点都要大了,不需要继续进行调整
		}*/
	}

	return ;
}

/*void siftup(int i)  //向上调整
{
	int flag = 0;
	if(i == 1)  return ;   //已经是 根结点了
	while(i != 1 && flag == 0)
	{
		//判断是否比父节点 小
		if(h[i] < h[i/2])  swap(i,i/2);
		else  flag = 1;

		i = i/2;
	}
	return ;
}
*/

void heapsort()
{
	while(n > 1)
	{
		swap(1,n);
		n--;
		siftdown(1);
	}

	return ;


}

void creat()
{
	int i;
	for(i = n/2;i >= 1;i--)   siftdown(i);

	return ;
}

int main()
{
	int num,i;
	scanf("%d",&num);
	n = num;
	for(i = 1;i <= num;i++)   scanf( "%d",&h[i]);
	
	creat();  //建堆    大顶堆   
	
//	creat1();   //小顶堆


	//堆排序
//	heapsort();

	for(i = 1;i <= num;i++)  printf( "%d ",h[i]);
	

	return 0;
}
