#include<stdio.h>
int main()
{
char s[20]="5GUVI1";
int len,i;
len=strlen(s);
for(i=1;s[i]!='\0';i++)
{
if(s[i]>='1'&&s[i]<='9')
{
printf("%c",s[i]);
}
}
return 0;
}

