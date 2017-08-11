#include<stdio.h>
void main()
{ char n;
  clrscr();
  printf(" Enter the character : ");
  scanf("%c",&n);
  if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
   printf(" The character %c is vowel ");
  else
   printf(" The character %c is consonant ");
}  
