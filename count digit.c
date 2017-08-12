#include<stdio.h>
#include<conio.h>
void main()
{ int a,b,c;
  clrscr();
  printf(" Enter the integer : ");
  scanf("%d",&a);
  a=b;
  while(b!=0)
  { b=b/10;
     ++c;
   }
   printf(" Number the digits in %d :%d" ,a,c);
   getch();
   return 0;
}   
