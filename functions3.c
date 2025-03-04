#include<stdio.h>
#include<conio.h>
// wihtout argument with return value
int takenumber()
{
    int i;
    printf("enter a number\n");
    scanf("%d",&i);
    return i;
}
int main()
{
    int a;
    int b;
    int c;
c=takenumber();
printf("the number is:%d",c);
}