#include<conio.h>
#include<stdio.h>
 main()
{
clrscr();
int ch;
while(ch!=4)
{
printf("select 1 for breakfast \n"
"select 2 for lunch \n"
"select 3 for dinner \n"
"select 4 to exit \n"
"enter your choice \n");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
printf("select 1 for ap \n"
"select 2 for gp \n"
"select 3 for pp \n"
"select 4 to exit \n"
"enter your choice \n");
int ch1;
scanf("%d",&ch1);
switch(ch1)
{
case 1:
{
printf("your order is ap \n");
break;
}
case 2:
{
printf("your order is gp \n");
break;
}
case 3:
{
printf("your order is pp \n");
break;
}
//deafult:
//printf("wrong choice");
}
break;
}
case 2:
{
printf("select 1 for rc \n"
"select 2 for kc \n"
"select 3 for cc \n"
"select 4 to exit \n"
"enter your choice \n");
int ch2;
scanf("%d",&ch2);
break;
}
case 3:
{
printf("select 1 for dm \n"
"select 2 for pbm \n"
"select 3 for mv \n"
"select 4 to exit \n"
"enter your choice \n");
int ch3;
scanf("%d",&ch3);
break;
}
deafult:
printf("wrong choice \n");
}
}
}