#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b=10;
  printf("enter any number\n");
  scanf("%d",&a);
  do
  {
    printf("%d\n",b);
    b++; 
  } while (b<a);

}