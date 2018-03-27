#include<stdio.h>
#include<conio.h>
void main()
{
 int n;
clrscr();
 printf("Enter a number");
 scanf("%d",&n);
 if(n=1<=n<=100000)
{
 if(n<0)
printf("A number is -ve");
else if(n>0)
printf("A number is +ve");
else 
printf("A number is zero");
}
getch();
}