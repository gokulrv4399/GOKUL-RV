#include<stdio.h>
#include<conio.h>
void main()
{
int n1,m,p1=0;
clrscr();
scanf("%d%d",&n1,&m);
p1=n1*m;
if(p1%2==0)
{
printf("even");
}
else
{
printf("odd");
}
getch();
}
