#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

char a[30 * 3500];
int main()
{
	int i = 0;
	char ch;
	int flag2 = 0;
	while((ch = getchar()) && ch != EOF)
	{
		if(ch == 'E')
		{
			flag2 = 1;
		}
		if(flag2 == 1) continue;
		a[i++] = ch;
	}
	int flag = 0;
	int li = 0;
	int other = 0;
	for(int j = 0;j < i;j++)
	{
		if(a[j] == 'W') li++;
		else if(a[j] == 'L')other++;
		if(li >= 11 || other >= 11)
		{
			if(abs(li - other) >= 2)
			{
				printf("%d:%d\n",li,other);
				li = 0;
				other = 0;
				flag = 1;
			}
		}
	}

//	if(li != 0 || other != 0)
	{
		printf("%d:%d\n",li,other);
	}
//	if(flag == 0) 	printf("%d:%d\n",li,other);
	
	int flag3 = 0;

	printf("\n");

	
	li = 0,other = 0;
	// 21  赛制
        for(int j = 0;j < i;j++)
        {   
                if(a[j] == 'W') li++;
                else if(a[j] == 'L')other++;
                if(li >= 21 || other >= 21) 
                {   
                        if(abs(li - other) >= 2)
                        {   
                                printf("%d:%d\n",li,other);
                                li = 0;
                                other = 0;
                                flag3 = 1;
                        }   
                }   
        } 

	//if(li != 0 || other != 0)
	{
		printf("%d:%d\n",li,other);
	}
	//if(flag3 == 0) 	printf("%d:%d\n",li,other);


	return 0;
}
