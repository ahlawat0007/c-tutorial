#include<stdio.h>
#include<conio.h>
int main()
{
  int num,table=5;
  printf("enter any number\n");
  scanf("%d",&num);
  do
  {
    printf("%d\n",table);
    table++;
  } while (table<num);
  
}
