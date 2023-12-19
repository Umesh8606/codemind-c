#include<stdio.h>
#include<math.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int k,h=0,r=0;
    for(int i=0;i<=n;i++)
    {
        h+=i*i;
        r+=i;
    }k=pow(r,2);
    printf("%d ",abs(h-k));
}