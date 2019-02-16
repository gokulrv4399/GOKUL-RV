#include<stdio.h>
#include<conio.h>
void main()
{
int a1[20],min,max=0,i,n;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a1[i]);
}
min=a1[0];
max=0;
for(i=0;i<n;i++)
{
if(a1[i]>max)
{
max=a1[i];
}
}
for(i=0;i<n;i++)
{
if(a1[i]<min)
{
min=a1[i];
}
}
printf("%d %d",min,max);
getch();
}

