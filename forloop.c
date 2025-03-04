#include<stdio.h>
#include<conio.h>
int main()
{
    int i,number;
    printf("enter any number you want to create table\n");
    scanf("%d",&number);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",number,i,number*i);
    }


}