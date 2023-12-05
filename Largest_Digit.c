#include<stdio.h>
int main()
{
    int a,b,h=0;
    scanf("%d",&a);
while(a!=0)
{
    b=a%10;
    a=a/10;
    if(h<b)
    {
        h=b;
    }
}
    printf("%d",h);
}
