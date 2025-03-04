#include<stdio.h>
#include<conio.h>
int main(){
    double kgs;
    double grams;
    printf("enter your value in grams\n");
    scanf("%lf",&grams);
    printf("%lf/1000=\n",grams);
    printf("%lfkgs",grams/1000);
}               