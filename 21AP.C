#include<stdio.h>
int main()
{
int n,a,d,i,sum=0;
printf("\n enter the no of terms:");
scanf("%d",&n);
printf("\n enter the first term:");
scanf("%d",&a);
printf("\n enter the difference:");
scanf("%d",&d);
for(i=0;i<n;i++)
{
sum=sum+a;
a=a+d;
}
printf("\n the sum is: %d",sum);
return 0;
}
