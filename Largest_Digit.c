#include<stdio.h>
int  main()
{
    int i,n,r,ld=0;
    scanf("%d",&n);
    while(n!=0)
    {
       r=n%10;
       {
           if(r>ld)
           {
               ld=r;
           }
       }
       n=n/10;
    }
    printf("%d",ld);
}