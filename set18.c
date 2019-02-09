#include <stdio.h>
#include<conio.h>

void main()
{
    int n,i,d=0;
    clrscr();
    
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       d+=i; 
    }
    printf("%d",d);
    
    getch();
}
