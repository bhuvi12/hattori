#include<stdio.h>
void main()
{
int i=1,sum=0,k,n;
printf("enter the two numbers");
scanf("%d%d",&k,&n);
do
{
sum=sum+i;
i=i+1;
}
while(i<=k)
printf("the sum is",n,k,sum);
return 0;
}
