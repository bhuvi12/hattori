#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("enter the number\n");
scanf("%d",&a);
if(a>0)
printf("%d is a positive",a);
else if(a<0)
printf("%d is negative",a);
else
printf("0 is neither positive nor negative");
}
