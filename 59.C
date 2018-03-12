#include<stdio.h>
int main()
{
int i,max,a[10]={1,2,3,4,5,6,7,8,9,10};
max=a[0];
for(i=0;i<=10;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("\n maximun among ten entered by user is :%d",max);
return 0;
}
