#include <stdio.h>
#include<conio.h>
void main()
{
    int n,k,i;
    clrscr();
    scanf("%d",&n);
    scanf("%d",&k);
    
    for(i=n+1;i<=k;i++)
    {
        if(i%2==0)
        {
        printf(" %d",i);
        }
    }
  getch();
}
