#include<stdio.h>
int findminpos(int a[],int num);
int main( )
{
        int num,i,j;
        int pos;
        int temp;
        int sum = 0;
        scanf("%d",&num);
        int a[num];
        for(i = 0;i < num;i++)
        {
                scanf( "%d",&a[i]);
        }
        temp = num;
        for(j = 0;j < temp-1;j++)
        {
                pos = findminpos(a,num);
                a[pos] = a[pos] + a[pos+1];
                sum += a[pos];
                for(i = pos+1;i < num;i++)
                {
                        a[i] = a[i+1];
                }
                num--;
        
        }
        printf( "%d",sum);
}


int findminpos(int a[],int num)
{
        int i;
        int add[num-1];
        int min;
        int flag = 0;
        for(i = 0;i < num-1;i++)
        {
                add[i] = a[i] + a[i+1];
        }
        min = add[0];
        for(i = 1;i < num-1;i++)
        {
                if(add[i] < min)
                {                                                                                                                                                                                           
                        min = add[i];
                        flag = i;
                }
        }
        return flag;
}

