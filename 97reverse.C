#include<stdio.h>
int main()
{
int rev=0,num,rem;
printf("\n enter num:");
scanf("%d",&num);
while(num!=0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
printf("%d\n the reverse of gvn num is :",rev);
return 0;
}
