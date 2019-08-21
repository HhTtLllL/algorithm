#include<cstdio>
#include<iostream>
using namespace std;
int ans[14],biaoji[3][28],sum,n;

//标记数组 存储的 是 棋子 的位置
//  biaoji[0]  存 列
//  biaoji[1]  存 对角线
//  biaoji[2]  存 对角线
void queen(int j)
{
    if(j>n)
    {
        sum++;
        if(sum <= 3) 
        {
            for(int i=1;i<=n;i++)    printf("%d ",ans[i]);
  	          printf("\n");
        }
    }
    for(int i=1;i<=n;i++)
    {
        if((biaoji[0][i] == 0)&&(biaoji[1][j+i] == 0)&&(biaoji[2][j-i+n] == 0))    //如果这一行的  3 个方向的地方 均未 放过 棋子
        {
            ans[j]=i;  // ans  表示 行    a[line]  表示 列
            biaoji[0][i]=1; biaoji[1][j+i]=1; biaoji[2][j-i+n]=1;
            queen(j+1);
            biaoji[0][i]=0; biaoji[1][j+i]=0; biaoji[2][j-i+n]=0;
        }
    }
}
int main()
{
    scanf("%d",&n);
    queen(1);
    printf("%d",sum);
    return 0;
}

/*
 代码中，

数组ans[line]=i表示第line行的第i列有一个棋子，保证了每行只有一个棋子；

数组check保证了每列和每条对角线上只有一个棋子，具体机制如下，没有一些奇奇怪怪难以理解的公式：

check[0]储存了棋子的列数，每一次进行ans[line]=i，使check[0][i]标记为已使用；

check[1]和check[2]储存对角线上的棋子分布情况：


对于一条从右上到左下的对角线，其上的棋子坐标应满足x+y为一定值；

对于一条从左上到右下的对角线，其上的棋子坐标应满足x-y为一定值，为了避免负数的产生，代码中用x-y+n来储存数字，具体效果读者可以自行研究。

对于语句

if((!check[0][i])&&(!check[1][line+i])&&(!check[2][line-i+n]))

只要满足这三个数字均为使用过，则在ans[line]=i处放置棋子，并将check数组中的相应数值标记为已使用，并对下一行进行搜索。

由于题目要求输出前3组解，所以计数器sum>3时不输出结果，最后在main函数中输出最终解的数量。*/
