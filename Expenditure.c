#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int spend=y*30;
    if(x>=spend)
    printf("YES");
    else 
    printf("NO");
}