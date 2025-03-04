#include<stdio.h>
#include<conio.h>

void myfunction()
{
 static int count=0;
    count++;
    printf("hi ! sahil ahlawat your name calls %d times\n",count);
}
int main()
{
    myfunction();
    myfunction();
    myfunction();
}