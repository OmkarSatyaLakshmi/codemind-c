#include<stdio.h>
int main()
{
    int X,Y,Max,Max2;
    scanf("%d%d%d%d",&X,&Y,&Max,&Max2);
    Max = 500-X*2 + 1000-(X+Y)*4;
    Max2 = 1000-Y*4+500-(Y+X)*2; 
    if (Max>Max2)
    {
        printf("%d",Max);
    }
    else 
    {
        printf("%d",Max2);
    }
}