#include <stdio.h>


int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);// recursive call
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("You entered negative numbers.\n");
    } else {
        printf("Factorial of %d is : %d\n", number, factorial(number));
    }

    return 0;
}
