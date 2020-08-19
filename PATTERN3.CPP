#include<conio.h>
#include<stdio.h>
main()
{
clrscr();
int i,j,n,k=0;
printf("enter the no:\n");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
printf("\n");
for(j=1;j<=i;j++)
printf("%d ",++k);
}
getch();
}