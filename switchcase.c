
#include<stdio.h>
#include<stdio.h>
void main(){
    int day;
    printf("enter the day 1 to 7 for check week day name\n");
    scanf("%d",&day);
    switch (day){ 
    
    case 0:
        printf("sunday\n");
        break;
    case 1:
        printf("monday\n");
        break;
    case 3:
        printf("tuesday\n");
        break;
    case 4:
        printf("wednesday\n");
        break;
    case 5:
        printf("thursday\n");
        break;
    case 6:
        printf("friday\n");
        break;
    case 7:
        printf("saturday\n");
        break;
    default:
        printf("enter the valid number");
    }
}