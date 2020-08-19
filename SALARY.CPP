#include<conio.h>
#include<stdio.h>
main()
{
clrscr();
int i,bs,hra,gs;
char a[100];
for (i=0;i<3;i++)
{
printf("\n enter your name:\n");
scanf("%c",&a);
printf("enter your base salary:\n");
scanf("%d",&bs);
printf("enter your hra:\n");
scanf("%d",&hra);
gs=hra+bs;
printf("name:%c",a);
printf("\n salary:%d",gs);
}
}
