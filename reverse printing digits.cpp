#include <stdio.h>
int main() {
    int num, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    printf("Reversed number: %d\n", rev);
    return 0;
}

