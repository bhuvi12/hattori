#include<stdio.h>
int main()
{
int a,i,fg=0;
printf("enter the number");
scanf("%d",&a);
for(i=2;i<=a/2;++i)
{
if(a%i==0)
{
fg=1;
break;
}
}
if(fg==0)
printf("number is prime");
else
printf("the number not prime");
return 0;
}
