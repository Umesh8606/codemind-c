#include<stdio.h>
int main()
{
    int n,s=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b;
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(a[i]==b)
        {
            s=1;
            break;
        }
    }
    if(s==1)
    {
        printf("True");
    }
    else{
        printf("False");
    }
    
}