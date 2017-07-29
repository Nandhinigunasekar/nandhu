#include<stdio.h>
int main()
{  int year;
    printf("\n Enter the year : ");
    scanf("%d",&year);
    if(year%4==0||year%100==0||year%400==0)
    { 
       printf("\n The %d year is leap year ",year);
     }
     else
     { 
       printf("\n The %d year is not a leap year",year);
      }
      return 0;
  }    
