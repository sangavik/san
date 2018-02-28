#include<stdio.h>
int main()
{
int b,p,k=1,i;
printf("\n enter the base :");
scanf("%d",&b);
printf("\n enter the power :");
scanf("%d",&p);
for(i=0;i<k;i++)
{
k=b*k;
}
printf("\n output is %d",k);
return 0;
}
