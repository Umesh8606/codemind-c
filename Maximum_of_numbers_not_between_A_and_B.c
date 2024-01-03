#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n],x,y,f=0,max=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&x,&y);
    for(i=0;i<n;i++)
    {
        if(a[i]<x || a[i]>y)
        {
            f=1;
            if(a[i]>max)
            {
                max=a[i];
            }
        }
    }
    if(f==0)
    {
        printf("-1");
    }
    else{
        printf("%d",max);
    }
}