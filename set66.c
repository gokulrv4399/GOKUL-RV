#include<stdio.h>
#include<conio.h>
void main()
{
char s1[300];
int i=0,cou=0,des=0;
clrscr();
gets(s1);
while(s1[i]!='\0')
{
i++;
cou++;
}
for(i=0;i<cou;i++)
{
if((s1[i]>='a' && s1[i]<='z' || s1[i]>='A' && s1[i]<='Z')&&(s1[i]>=47 && s1[i]<=56))
{
des=0;
}
else if(s1[i]=='_')
{
des=1;
break;
}
}
if(des==1)
{
printf("no");
}
else
{
printf("yes");
}
getch();
}


