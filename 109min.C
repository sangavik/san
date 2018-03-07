#include<stdio.h>
int main()
{
int s,i,j,b[10];
printf("\n enter values:");
for(i=0;i<=10;i++)
{
scanf("%d",&b[i]);
}
s=b[0];
for(j=0;j<=10;j++)
{
if(b[i]<s)
{
s=b[i];
}
}
printf("\n minimum element is :%d",s);
return 0;
}
