#include<stdio.h>
int main()
{
    int a,r,n,c=0;
    scanf("%d",&a);
    n=a*a;
    while(n!=0)
    {
        r=n%10;
        c=c+r;
        n=n/10;
    }
    if(c==a)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}