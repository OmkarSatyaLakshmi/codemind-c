#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int hour = x/60;
    int minutes = x-(hour*60);
    printf("%d Hour(s) %d Minute(s)",hour,minutes);
}