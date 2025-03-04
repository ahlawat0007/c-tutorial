#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; // Store original number

    // Reverse the number
    while (num > 0) {
        remainder = num % 10;               // Get last digit
        reversedNum = reversedNum * 10 + remainder; // Build reversed number
        num = num / 10;                     // Remove last digit
    }

    // Check if the original and reversed numbers are the same
    if (originalNum == reversedNum)
        printf("%d is a Palindrome Number\n", originalNum);
    else
        printf("%d is NOT a Palindrome Number\n", originalNum);

    return 0;
}
