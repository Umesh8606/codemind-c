#include<stdio.h>
int main()
{
    int i,a;
    scanf("%d",&a);
    for(i=a*2;i>=1;i-=2)
    {
        printf("%d ",i);
    }
}