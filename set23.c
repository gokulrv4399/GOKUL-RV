#include <stdio.h>
#include<conio.h>
void main()
{
    int n,i,flag=0;
    clrscr();
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(n==1)
    {
        printf("1 in eighther prime or nor");
    }
    else
    {
        if(flag==0)
    
        printf("yes");
        else
        printf("no");
    }
  getch();
}
