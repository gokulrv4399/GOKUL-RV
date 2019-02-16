#include<stdio.h>
#include<conio.h>
void main()
{
int n1,a=0,b=1,c;
clrscr();
scanf("%d",&n1);
printf("%d ",b);
while(n1-1)
{
c=a+b;
printf("%d ",c);
a=b;
b=c;
n1--;
}
getch();
}

