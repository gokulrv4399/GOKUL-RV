#include<stdio.h>
#include<conio.h>
void main()
{
int a1[20],max,i,n;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a1[i]);
}
max=0;
for(i=0;i<n;i++)
{
if(a1[i]>max)
{
max=a1[i];
}
}
printf("%d",max);
getch();
}
