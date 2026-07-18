#include <stdio.h>

int main() {
    int num, originalNum, remainder, reverse = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reverse)
        printf("%d is a Palindrome.\n", originalNum);
    else
        printf("%d is Not a Palindrome.\n", originalNum);

    return 0;
}
