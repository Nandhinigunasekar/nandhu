#include<stdio.h>
#include<conio.h>
void main()
{ int i,num,sum=0;
   clrscr();
   printf(" Enter the number : ");
   scanf("%d",&num);
   for(i=0;i<=num;i++)
   { sum=sum+i;
   }
   printf(" sum of the first %d number = %d",num,sum);
   return 0;
 }  
