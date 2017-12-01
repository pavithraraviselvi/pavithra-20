#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a;
printf(" enter the number a");
scanf("%d",&a);
if(a>0)
{
printf("%d is a positive number");
}
elseif(a=0)
{
printf("%d is zero");
}
else
{
printf("%d is a negative number");
}
getch();
}
