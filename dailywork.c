#include<stdio.h>
#include<conio.h>
int main()
{
    //code for change km to meters
    float km,meters;
    printf("enter the value you want change km to meters:");
    scanf("%f",&km);
    meters=km*1000;
    printf(" %0.2f km: is equal to %0.2f meters\n  ",km,meters);
    // code for change kg to grmas
    float kg,grams;
    printf("enter the value you want change kg to grams:");
    scanf("%f",&kg);
    grams=kg*1000;
    printf(" %0.2f kg: is equal to %0.2f grams\n  ",kg,grams);
    // code for change foot to inches
    float foot,inches;
    printf("enter the value you want change foot to inches:");
    scanf("%f",&foot);
    inches=foot*12;
    printf(" %0.2f foot: is equal to %0.2f inches\n  ",foot,inches);




}