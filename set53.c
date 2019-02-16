#include<stdio.h>
#include<conio.h>
void main()
{
char s11[20],s2[20];
int i,j;
clrscr();
gets(s11);
gets(s2);
for(i=0;s11[i]!='\0';++i);
for(j=0;s2[j]!='\0';++j,++i)
{
s11[i]=s2[j];
}
s11[i]='\0';
printf("%s",s11);
getch();
}
