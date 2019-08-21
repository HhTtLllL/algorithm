#include<cstdio>
long long  sum1;
int arr[5000005];
void merge( int arr[],int L,int M,int R)
{
	int LEFT_SIZE = M - L;
	int RIGHT_SIZE = R- M + 1;
	int left[LEFT_SIZE];
	int right[RIGHT_SIZE];
	int i,j,k;

	//1.fill in the left sub array
	for(i = L;i < M;i++)
	{
		left[i-L] = arr[i];
	}

	//2.fill in the right sub array
	for( i = M;i <= R;i++)
	{
		right[i-M] = arr[i];
	}

	//3.Merge into the original array
	i = 0;j = 0;k = L;

	while(i < LEFT_SIZE && j < RIGHT_SIZE)
	{
		if(left[i] <= right[j])
		{
			arr[k] = left[i];
			i++;
			k++;
		}
		else
		{
			arr[k] = right[j];
			j++;
			k++;
			sum1 = sum1 + LEFT_SIZE - i;
		}
	}

	//填充将剩下的 数填充进去                      
	while(i < LEFT_SIZE)
	{
		arr[k] = left[i];
		i++;
		k++;
	}

	while(j < RIGHT_SIZE)
	{
		arr[k] = right[j];
		j++;
		k++;
	}
}

void mergeSort( int arr[],int L,int R)
{
	if( L == R)   return;
	else
	{
		int M = ( L + R)/2;
		mergeSort( arr,L,M);
		mergeSort( arr,M+1,R);
		merge( arr,L,M+1,R);
	}
}
int main( )
{
	int n;
	scanf( "%d",&n);
	for(int j = 0;j < n;j++)   scanf( "%d",&arr[j]);
	int L = 0;
	int R = n-1;
	mergeSort( arr,L,R);
	int i;
	printf( "%lld",sum1);


}
