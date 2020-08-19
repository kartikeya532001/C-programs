#include<conio.h>
#include<stdio.h>
main()
{
clrscr();
int i,j,n;
printf("enter the no:\n");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
printf("\n");
for(j=1;j<=i;j++)
printf("1 ");
}
getch();
}