#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=a%10;
    while(a>0)
    {
    	c=a%10;
        a=a/10;
    }
    printf("%d",b+c);
}