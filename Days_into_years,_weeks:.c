#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int years = x/365;
    int weeks = (x%365)/7;
    printf("%d
%d",years,weeks);
}