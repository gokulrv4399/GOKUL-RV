#include<stdio.h>
#include<conio.h>
void main()
{
int n,count=0,rem=0;
clrscr();
scanf("%d",&n);
while(n)
{
rem=n%10;
count++;
n=n/10;
}
printf("%d",count);
getch();
}
