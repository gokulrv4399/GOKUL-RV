#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a1[20],b[20];
int l1,l2;
clrscr();
gets(a1);
gets(b);
l1=strlen(a1);
l2=strlen(b);
if(l1>l2)
{
printf("%s",a1);
}
else if(l1<l2)
{
printf("%s",b);
}
else
{
printf("%s",b);
}
getch();
}
