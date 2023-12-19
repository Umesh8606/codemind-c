#include<stdio.h>
int main()
{
    int n,i,sum=0,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    sum=sum+arr[i];}
    int avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(avg<=arr[i])
     {
       c++;
       
     }
    }
    printf("%d",c);
}