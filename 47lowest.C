#include<stdio.h>
int main()
{
int a[6],i,big=0,small=0,n=6;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
big=small=a[0];
for(i=0;i<n;i++)
{
if(a[i]>big)
{
big=a[i];
}
if(a[i]<small)
{
small=a[i];
}
}
printf("\n biggest element in array is : %d",big);
printf("\n smallest element in the array is : %d",small);
return 0;
}
