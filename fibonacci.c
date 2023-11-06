#include<stdio.h>
int main()
{
	int N,i;
	scanf("%d",&N);
	int a=0,b=1,c=a+b;
	printf("%d %d ",a,b);
	for(i=1;i<=(N-2);i++)
	{
		printf("%d ",c);
		a=b;
		b=c;
		c=a+b;
	}
}