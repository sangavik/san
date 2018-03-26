#include<stdio.h>
int main()
{
int num1,num2,lcm,gcd,i;
printf("\n enter two values:");
scanf("%d %d",&num1,&num2);
for(i=1;i<=num1&&i<=num2;i++)
{
if((num1%i==0) && (num2%i==0)
{
gcd=i;
}
}
lcm=(num1*num2)/gcd;
printf("\n the lcm of 2 numbers : %d",lcm);
return 0;
}
