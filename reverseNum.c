#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int reversed = 0, remainder;
    while (n != 0) {
        remainder = n % 10; //to get the last digit
        reversed = reversed * 10 + remainder;
        n /= 10; // to remove the last digit
    }
    printf("Reversed number: %d\n", reversed);
}