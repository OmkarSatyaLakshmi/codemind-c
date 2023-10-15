#include<stdio.h>
int main( )
{
    int X,Y,Z;
    scanf("%d%d%d",&X,&Y,&Z);
    int perimeter = 2*(X+Y);
    int cost = Z * perimeter;
    printf("%d",cost);
}