#include<stdio.h>
#include<conio.h>
void main()
{ 
   int a;
   clrscr();
   printf("\n enter the number: ");
   scanf("%d",&a);
   if(a%2==0)
      printf(" The number is even ");
   else
      printf(" the number is odd");
   getch();
}   
