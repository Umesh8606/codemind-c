#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
double bill;
if (n < 199)
bill=n*1.20;
else if (n>=200 && n <400 )
bill=n*1.50;
else if(n>=400 && n<600)
bill=n*1.80;
else if (n >= 600)
bill=n*2.00;
if (bill > 400)
bill=bill+0.15*bill;
else
bill= bill + 100;
printf ("%.2f ",bill);
}