#include<stdio.h>
int main()
{
	int N,i;
	scanf("%d",&N);
	int arr[N];
	for(i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	int min;
	min= arr[0];
	for(i=0;i<N;i++)
	 {
	if( min>arr[i])
	{
		min= arr[i];
    }
    }
     printf("%d",min);
}