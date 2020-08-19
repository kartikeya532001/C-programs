#include<conio.h>
#include<stdio.h>
main()
{
clrscr();
int i,n,sum=0,pro=1;
printf("enter the no:\n");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
sum=sum+i;
pro=pro*i;
}
printf("sum:%d",sum);
printf("\nproduct:%d",pro);
getch();
}
