#include<stdio.h>
int main()
{
    int n,i=1;
    scanf("%d",&n);
    int a=0,b=1,c=a+b;
    while(c<n)
    {
        a=b;
        b=c;
        c=a+b;
        i++;
    }
    if(c==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}