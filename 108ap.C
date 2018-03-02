#include<stdio.h>
int main()
{
int A,B,C,sum=0,i;
printf("\n enter the values :");
scanf('%d %d %d",&A,&B,&C);
for(i=A;i<=C;i++)
{
sum=sum+A;
A=A+B;
}
printf('\n sum is :%d",sum);
return 0;
}
