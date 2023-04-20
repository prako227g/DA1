#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0)  // negative numbers are not palindromes
        return false;

    int reverse = 0;
    int original = x;

    while (x > 0) {
        reverse = reverse * 10 + (x % 10);
        x /= 10;
    }

    return (reverse == original);
}

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (isPalindrome(x))
        printf("%d is a palindrome\n", x);
    else
        printf("%d is not a palindrome\n", x);

    return 0;
}
