#include<stdio.h>
#include<conio.h>
int main()
{
    int hindi,english;
    {
    printf("enter your hindi marks %d\n");
    scanf("%d",&hindi);
    printf("enter your english marks %d\n");
  scanf("%d",&english);
    }
    if (hindi>50 && english>50)
    {
        printf("you pass both exams so you rewarded with $50 ");
    }
    else if(hindi>50 && english <=50)
    {
        printf("you pass only in hindi so you rewarded with $15");
    }
    else if(hindi<50 && english>=50)
    {
        printf("you pass only in english");    
    }
    else
    {
        printf("you fail in both exams");
    }  
}