#include<stdio.h>
int main()
{
    int n,x,i;
    scanf("%d",&n);
    x=n%10;
    while(n>0)
    {
        i=n%10;
        n=n/10;
    }
    printf("%d",x+i);
}