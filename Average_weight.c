#include<stdio.h>
#include<math.h>
int main( )
{
    int Average,Boy1weight,Boy2weight;
    scanf("%d%d%d",&Average,&Boy1weight,&Boy2weight);
    int Boy3weight = (3*Average)-(Boy1weight + Boy2weight);
    printf("%d",Boy3weight);
}