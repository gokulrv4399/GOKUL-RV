#include<stdio.h>
#include<conio.h>
void main()
{
char str1[20];
int calpha,cdigit,cspecial,cspace;
int i;
cdigit=calpha=cspecial=cspace=0;
printf("enter a string");
gets(str1);
for(i=0;str1[i]!=NULL;i++)
{
if(str1[i]>='0' && str1[i]<='9')
cdigit++;
else if((str1[i]>='A' && str1[i]<='Z')||(str1[i]>='a' && str1[i]<='z'))
calpha++;
else if(str1[i]==' ')
cspace++;
else
cspecial++;
}
printf("%d",cspecial);
getch();
}
