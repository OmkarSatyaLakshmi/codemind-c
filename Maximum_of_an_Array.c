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
	int max;
	max= arr[0];
	for(i=0;i<N;i++)
	 {
	if( max<arr[i])
	{
		max= arr[i];
    }
    }
     printf("%d",max);
}