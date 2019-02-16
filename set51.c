#include<stdio.h>
#include<conio.h>
void main()
{
char a1[20];
int n;
clrscr();
gets(a1);
scanf("%d",&n);
while(n)
{
printf("%s",a1);
n--;
printf("\n");
}
getch();
}
