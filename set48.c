#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
void main()
{
int num11,num2;
clrscr();
scanf("%d%d",&num11,&num2);
swap(&num11,&num2);
printf("%d %d",num11,num2);
getch();
}
void swap(int *x,int *y)
{
*x=*x^*y;
*y=*x^*y;
*x=*x^*y;
}
