#include<stdio.h>
#include<conio.h>
void main()
{
char s1[30];
int i,des=0;
clrscr();
gets(s);
for(i=0;s1[i]!='\0';i++)
{
if(s1[i]=='0' || s1[i]=='1')
{
des=0;
}
else
{
des=1;
break;
}
}
if(des==0)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
