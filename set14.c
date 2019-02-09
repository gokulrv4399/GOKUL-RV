#include <stdio.h>
#include<conio.h>

int main()
{
    char ch;
    clrscr();
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    {
        printf("Alphabet");
    }
    else
    {
        printf("No");
    }
    
    getch();
}
