

int* selfDividingNumbers(int left, int right, int* returnSize)
{
	int *a = (int *)malloc(sizeof(int)*10010);
	int sum = 0;
	for(int i = left;i <= right;i++)
	{
		int flag = 0,flag1 = 0;
		int temp = i;
		while(temp)
		{
			if((temp/10) == (temp*10))
			{
				flag = 1;
				break;
			}
			int temp2 = temp%10;
			if(temp2 == 0) 
			{
				flag = 1;
				break;
			}
			if((i%temp2) != 0)
			{
				flag = 1;
				break;
			}
			temp /= 10;
		}
		if(flag == 0)
		{
			a[sum++] = i;
		}
	}
	*returnSize = sum;
	return a;
    

}
