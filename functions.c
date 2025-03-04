#include<stdio.h>
#include<conio.h>
//with argument and with return value
int sum(int a,int b)
{
     return a+b;
}
int main(){
     int a,b,c;
      a=20;
     b=45;
     c=sum(a,b);
     printf("%d\n",c);
}  