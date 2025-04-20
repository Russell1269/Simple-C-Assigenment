#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 3 numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    // largest
    if (a > b && a > c)
    {
        printf("Largest Number is: %d\n", a);
    }
    else if (b > c)
    {
        printf("Largest Number is: %d\n", b);
    }
    else
    {
        printf("Largest Number is: %d\n", c);
    }
    
    // smallest
    if (a < b && a < c)
    {
        printf("Smallest Number is: %d\n", a);
    }
    else if (b < c)
    {
        printf("Smallest Number is: %d\n", b);
    }
    else
    {
        printf("Smallest Number is: %d\n", c);
    }

    return 0;
}