#include<stdio.h>
int main( )
{
    float x,y,profit,pp;
    scanf("%f%f",&x,&y);
    profit = y-x;
    pp = profit/x*100;
    printf("%.2f",pp);
}