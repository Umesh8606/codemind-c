#include<stdio.h>
int main()
{
    int a,b=0,c=1,d,i;
    scanf("%d",&a);
    printf("%d %d",b,c);
    for(i=3;i<=a;i++)
    {
        printf(" %d",d=b+c);
        b=c;
        c=d;
    }
}