#include<stdio.h>
#include<conio.h>
void main()
{
int n11,count=0;
clrscr();
scanf("%d",&n11);
while(n11)
{
n11=n11/10;
count++;
}
printf("%d",count);
getch();
}
