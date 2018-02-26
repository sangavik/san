#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,j;
char x[20],y[9];
printf("\n enter the 1st string:");
scanf("%s",x);
printf("\n enter 2nd string:");
scanf("%s",y);
a=strlen(x[i]);
b=strlen(y[j]);
if(x[i]>y[j])
{
printf("\n the greatest string is %s:",x);
}
else if(x[i]<y[j])
{
printf("\n the greatest string is:%s",y);
}
else
{
printf("\n strings are equal");
}
getch();
}
