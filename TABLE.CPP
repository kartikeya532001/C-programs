#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int i,no,ans;
for(i=1;i<11;i++)
{
scanf("%d",&no);
ans=no*i;
printf("\n %d*%d",no*i);
printf("=%d",ans);
}
}