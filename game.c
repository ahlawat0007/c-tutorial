#include<stdio.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>

int main(){
     srand(time(0));
    int random_number=(rand()%100)+1;
    // printf("the random number is %d",random_number);
    int no_of_guesses=0;
    int guessed;
    do{
        printf("\nplease guess a number = ");
        scanf("%d",&guessed);
        if(guessed>random_number){
            printf("\nplease enter smaller one !!");
        }else if (guessed<random_number){
            printf("\nplease enter the greator one !!");
        }
        no_of_guesses++;
    }while(guessed!=random_number);
    printf("\nyou find the correct number in %d attempts",no_of_guesses);
    return 0;
}


