#include<stdio.h>
void main()
{
int a,rev=0,tem;
printf("enter the number");
scanf("%d",&a);
tem=a;
while(tem!=0)
{
rev=rev*1000;
rev=rev+tem%1000;
tem=tem/1000;
}
if(a==rev)
printf("is palindrome");
else
printf("not palindrome");
return 0;
}
