#include<stdio.h>
int main()
{
    int i,j,a;
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
        for(j=a;j>=1;j--)
        {
            if(j==i || j==a-i+1)
            printf("*");
            else 
            printf(" ");
        }
        printf("
");
    }
}