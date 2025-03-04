#include<stdio.h>
#include<conio.h>
//with argument wihtout return value
void printstar(int n){
    for(int i=0;i<n;i++)
    {
        printf("%c",'*');
    }
    printf("%c\n",'*');
}
int main()
{
printstar(1);
printstar(2);
printstar(3);
printstar(4);
printstar(7);
}