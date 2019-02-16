#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a1[30];
int i,count=0,n;
clrscr();
scanf("%[^\t\n]s",a);
n=strlen(a1);
for(i=0;i<n;i++)
{
if(a1[i]>='0' && a1[i]<='9')
{
count++;
}
}
printf("%d",count);
getch();
}
