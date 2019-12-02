#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
	int cun = 0;
	int sheng = 0;
	int temp = 0;
	int hua = 0;
	int flag = 0;
	int temp2 = 0;
	for(int i = 1;i <= 12;i++)
	{
		cin >> hua;
		temp = 300 - hua + sheng;
		if(temp < 0 && flag == 0)
		{
			flag = 1;
			temp2 = i;
		}
		if(temp >= 300)
		{
			cun += 300;
			sheng = temp - 300;
		}
		else if(temp >= 200)
		{
			cun += 200;
			sheng = temp - 200;
		}
		else if(temp >= 100)
		{
			cun += 100;
			sheng = temp - 100;
		}
		else
		{
			sheng = temp;
		}
	}
	if(flag == 1)
	{
		printf("%d\n",-temp2);
		return 0;
	}
	cun += 0.2*cun;
	printf("%d\n",cun + sheng);
}

