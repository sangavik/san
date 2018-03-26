#include<stdio.h>
#include<string.h>
int main()
{
int i,j,l,count=0;
char a[10];
printf("\n enter the string:");
scdanf("%s",a);
l=strlen(a);
for(i=0;i<l;i++)
{
for(j=i+1;j<l;j++)
{
if(a[i]==a[j])
{
count =1;
break;
}
else
{
continue;
}
}
}
if(count==0)
{
printf("\n the given string is an isogram");
}
else
{
printf("\n the given string is not an isogram");
}
return 0;
}
