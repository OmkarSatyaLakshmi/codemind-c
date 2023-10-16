#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int Sum = x+y;
    int Difference = x-y;
    int Product = x*y;
    int Quotient = x/y;
    int Remainder = x%y;
    printf("Sum:%d
Difference:%d
Product:%d
Quotient:%d
Remainder:%d",Sum, Difference, Product, Quotient, Remainder);
}