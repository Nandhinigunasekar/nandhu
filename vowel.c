#include<stdio.h>
#include<conio.h>
void main()
{ char n;
  clrscr();
  printf(" Enter the character : ");
  scanf("%c",&n);
  if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
   printf(" The character is vowel ");
  else
   printf(" The character is consonant ");
}  
