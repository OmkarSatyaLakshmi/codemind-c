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
	int se,found=0;
	scanf("%d",&se);
	for(i=0;i<N;i++)
	{
		if(arr[i]==se)
		{
			found=1;
		break;
		}
	}
	if(found==0)printf("False");
		else printf("True");
}