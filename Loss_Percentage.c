#include<stdio.h>
int main( )
{
    float cp,sp;
    scanf("%f %f",&cp,&sp);
    float Z = ((cp-sp)/cp)*100.0;
    printf("%.2f",Z);
}