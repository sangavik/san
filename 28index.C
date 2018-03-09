#include<stdio.h>
int main()
{
int a[5],i,n;
printf("\n enter no.of. elements :");
scanf("%d",&n);
printf("\n enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("\n elements :%d index:%d",a[i],i);
}
return 0;
}
