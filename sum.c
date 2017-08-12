#include<stdio.h>
#include<conio.h>
void main()
{  int n,i,num=0;
   clrscr();
   printf(" Enter the number :   ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   { num=num+i ;
   }
   printf(" sum of the first %d natural  number : %d",n,num );
   return 0;
}
