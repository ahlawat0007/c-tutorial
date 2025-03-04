#include<stdio.h>
#include<conio.h>
int prime(int num){
    if(num<2)
    return 0;
    for(int i=2; i*i<=num; i++){
    if(num%i==0)
    return 0;
    }
    return 1;
}
int main()
{
int a;
printf("enter a number\n");
scanf("%d",&a);
if(prime(a))
printf("%d is prime number",a);
else
    printf("%d is not a prime number");
}