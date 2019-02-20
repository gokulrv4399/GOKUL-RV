#include<stdio.h>
#include<conio.h>
void main()
{
int n1,m1,s=0;
clrscr();
scanf("%d%d",&n1,&m1);
s=n1+m1;
if(s%2==0)
{
printf("even");
}
else
{
printf("odd");
}
getch();
}
