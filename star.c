#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main(){

int i,j,k;
clrscr();
for(i=1;i<=10;i++)
{
 printf("\n");
 }
 for(k=1;k<=5;k++)
 {
  for(i=1;i<=(39-k);i++)
  {
  printf(" ");
  }
  for(j=1; j<=k; j++)
  {
  textcolor(k+BLINK);
  cprintf(" *");
  delay(500);

  }
  printf("\n");
  }
  for(k=4;k>=1;k--)
  {
  for(i=1;i<=(39-k);i++)
  {
   printf(" ");
   }
   for(j=1; j<=k; j++)
   {
   textcolor(k+BLINK);
   cprintf(" *");
   delay(500);
   }
   printf("\n");
   }
  getch();
  }