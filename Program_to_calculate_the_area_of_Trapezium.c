#include <stdio.h>
int main( )
{
    int b1,b2,height;
    scanf("%d%d%d",&b1,&b2,&height);
    float area = (b1+b2)/2.0*height;
    printf("%.4f",area);
}