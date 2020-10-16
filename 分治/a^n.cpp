///////////////////////////////////////////////////////////////
// File Name: a^n.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-09-29 14:50:25
// Description:
///////////////////////////////////////////////////////////////

#include <stdio.h>

int main(void) 
{
    int a,n;
    scanf("%d%d",&a, &n);

    int sum = 1;
    for(int i = 0; i < n; i++ ){
        
        sum *= a;
    }

    printf("%d",sum);

    return 0;
}
