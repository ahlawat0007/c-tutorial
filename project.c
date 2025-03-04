#include <stdio.h>

int main() {
    int num1, num2, i;
    
    // Taking input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Ensuring num1 is smaller than num2
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    // Printing numbers between num1 and num2
    if (num1 == num2 - 1) {
        printf("No numbers between %d and %d.\n", num1, num2);
    } else {
        printf("Numbers between %d and %d are: \n", num1, num2);
        for (i = num1 + 1; i < num2; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    
    return 0;
}