#include <stdio.h>

int main()
{
    int num;

    printf("Enter a Number : ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("Positive Number");
    }
    else if (num < 0)
    {
        printf("Negetive Number");
    }
    else
    {
        printf("Your Entered number is Zero");
    }

    return 0;
}