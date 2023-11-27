#include<stdio.h>
int main()
{
    int a,b,i,rev=0;
    scanf("%d",&a);
    while(a!=0)
    {
        i=a%10;
        rev=rev*10+i;
        a=a/10;
    }
    printf("%d",rev);
}