#include<stdio.h>
int main()
{
int count,n;
printf("\n enter the num:");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
count++;
}
printf("\n no of dig is %d",count);
return 0;
}
