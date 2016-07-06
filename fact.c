#include<stdio.h>
#include<conio.h>
int main()
{
  int num,count,fact=1;
  clrscr();
  printf("\n Enter a number:");
  scanf("%d",&num);
  for(count=1;count<=num;count++)
  {
    fact = fact * count;
  }
  printf("\n Factorial of %d id %d",num,fact);
}
