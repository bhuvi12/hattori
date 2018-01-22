#include<stdio>
int main()
{
int yr;
printf("enter a year:%d");
scanf("%d",yr);
if(yr%4==0)
{
if(yr%100==0)
{
if(yr%400==0
printf("leap year,yr);
else
printf("not leap yr,yr);
}
else
printf("is leap yr");
}
else
printf("not leap yr");
return 0;
}
