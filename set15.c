#include <stdio.h>
#include<conio.h>

void main()
{
    int a,b,c;
    clrscr();
    
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    if(a>b && a>c)
    {
        printf("%d",a);
    }
    else if(b>c && b>a)
    {
        printf("%d",b);
    }
    else
    {
        printf("%d",c);
    }
    
    getch();
}
