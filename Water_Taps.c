#include<stdio.h>
int main( )
{
    int X,Y,Z;
    scanf("%d%d%d",&X,&Y,&Z);
    Z = (X*Y)/(X+Y);
    printf("%d",Z);
}