#include<stdio.h>
#include<conio.h>
void main()
{
char c;
printf("enter the character");
scanf("%c",&c);
if((c>='a'&&c<='z')//(c>='A'&&C<='Z'))
printf("c is an alphabet",c);
else
printf("c is not an alphabet",c);
return 0;
}
