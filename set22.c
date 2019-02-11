#include <stdio.h>
#include<conio.h>
void main()
{
    int n,k=0,temp=0,rem=0;
    clrscr();
    scanf("%d",&n);
    temp=n;
    while(temp)
    {
        rem=temp%10;
        k=k*10+rem;
        temp=temp/10;
    }
    if(n==k)
    {
        printf("yes");
    }
    else
    {
    printf("no");
    }
  getch();
}
