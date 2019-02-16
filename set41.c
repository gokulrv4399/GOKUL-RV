#include<stdio.h>
#include<conio.h>
void main()
{
char str1[20];
int i,count=0;
clrscr();
gets(str1);
for(i=0;str1[i]!='\0';i++)
{
if(str1[i]!=' ')
{
count++;
}
}
printf("%d",count);
getch();
}
