#include<stdio.h>
#include<conio.h>
int main()
{
    int department,subject;
    printf("choose a department\n1. science\n2. arts\n3. commarce\n");
    scanf("%d",&department);
    switch(department){
        case 1:
        printf("you choose science\n");
        printf("choose a sbuject\n1. maths\n2. chemistry\n3. physics\n");
        scanf("%d",&subject);
        switch(subject){
            case 1:
            printf("you choose maths\n");
            break;
            case 2:
            printf("you choose chemistry\n");
            break;
            case 3:
            printf("you choose physics\n");
            break;
            default:
            printf("choose valid subject\n");
        }break;
        case 2:
        printf("you choose arts\n");
        printf("choose a subject\n1. hindi\n2. english\n3. s.s");
        scanf("%d",subject);
        switch(subject){
            case 1:
            printf("you choose hindi\n");
            break;
            case 2:
            printf("you choose english\n");
            break;
            case 3:
            printf("you choose s.s\n");
            break;
            default:
            printf("choose a valid subject\n");
        }break;
            case 3:
            printf("you choose commarce\n");
            printf("choose a subject\n1.busness\n2.banking\n3.bank data\n");
            scanf("%d",&subject);
            switch(subject){
            case 1:
            printf("you choose busness");
            break;
            case 2:
            printf("you choose banking");
            break;
            case 3:
            printf("you choose bank data ");
            break;
            default:
            printf("choose a vali d subject");
            }break;
        
        default:
        printf("choose a valid department\n");
    }
}
