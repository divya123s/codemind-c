#include<stdio.h>
int main()
{
    int r,n,i;
    scanf("%d",&n);
    while(n!=0)
    {
       r=n%10;
       n=n/10;
       printf("%d",r);
    }
}