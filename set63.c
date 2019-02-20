#include<stdio.h>
#include<conio.h>
void main()
{
int n1,sum=0,rem=0;
clrscr();
scanf("%d",&n1);
while(n1)
{
rem=n1%10;
sum=sum+rem;
n1=n1/10;
}
printf("%d",sum);
getch();
}
