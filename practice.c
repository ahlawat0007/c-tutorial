#include<stdio.h>
#include<conio.h>
void main()
{
    int maths;
    int hindi;
    {
        printf("enter the marks of maths\n");
        scanf("%d",&maths);
        printf("enetr the marks of hindi\n");
        scanf("%d",&hindi);   
    }
    if(maths>=50 && hindi>=50)
    {
        printf("congratulation you pass both exams so rewarded by $50");
    }
    else if(maths<50 && hindi>=50)
    {
        printf("you only pass in hindi so you rewarded by $15");
    }
    else if( maths>=50 && hindi<50)
    {
        printf("you only pass in maths so you rewarded by $15");
    }
    else{
        printf("sorry you fail in both exams try next time");
    }
}