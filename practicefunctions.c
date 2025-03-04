#include<stdio.h>
#include<conio.h>
double add(double a,double b)
{
    //double c;
    return a+b;
    
}
double subtract(double a,double b)
{
   // double c;
    return a-b;
   // return c;
}
double multiply(double a,double b)
{
    //double c;
    return a*b;
   // return c;
}
double divide(double a,double b)
{
   // double c;
    return a/b;
   // return c;
}
int Remainder(int a,int b)
{
    return a%b;
}


double main()
{
double x,y;
int l,m;
printf("enter the value of x:\n");
scanf("%lf",&x);
printf("enter the y: ");
scanf("%lf",&y);
printf("enter the l ");
scanf("%d",&l);
printf("enter m ");
scanf("%d",&m);



double z=add(x,y);
double a=subtract(x,y);
double b=multiply(x,y);
double c=divide(x,y);
int d=Remainder(l,m);
printf("add of x,y is:%.2lf\n",z);
printf("substract of x,y is:%.2lf\n",a);
printf("multiply of x,y is:%.2lf\n",b);
printf("divide of x,y is:%.2lf\n",c);
printf("remainder of l,m is:%d\n",d);
}