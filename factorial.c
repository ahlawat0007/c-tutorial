/*#include<stdio.h>
#include<conio.h>
 int factorial(int n)
{
    int fact=1;
    for ( int i = 1; i <=n; i++)
    {
        fact*=i;
    }
    return fact;

}
int main()
{
int num;
printf("enter any number\n");
scanf("%d",&num);

if (num<0)
{
    printf("enter a vlaid number\n");
}
else
{
    printf("factorial of %d is %d\n",num,factorial(num));
}

}*/
// they both codes are used to find factorial

#include <stdio.h>
#include <conio.h>
int factroial(int number)
{
    if (number == 1 || number == 0)
        return 1;
    else
        return (number * factroial(number - 1));
}
int main()
{

    int num;
    printf("enter any number you want factorial of:");
    scanf("%d", &num);
    printf("factorial of %d is %d :", num, factroial(num));
}