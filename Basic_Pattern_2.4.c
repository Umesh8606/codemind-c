#include<stdio.h>
int main()
{
    int i,j,a;
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
        for(j=i;j<=a;j++)
        {
            printf("%d ",j);
        }
        printf("
");
    }
    return 0;
}