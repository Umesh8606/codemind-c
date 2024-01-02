#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,x,y,f=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&x,&y);
    for(int i=0;i<n;i++)
    {
        if(a[i]<x || a[i]>y)
        {
            f=1;
            printf("%d ",a[i]);
        }
    }
    if(f==0)
    {
        printf("-1");
    }
}