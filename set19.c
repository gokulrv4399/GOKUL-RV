#include <stdio.h>
#include<conio.h>
void main()
{
    int a[10],n,k,i,sum=0;
    clrscr();
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<k;i++)
    {
        sum+=a[i];
    }
    printf("%d",sum);
  getch();
}
