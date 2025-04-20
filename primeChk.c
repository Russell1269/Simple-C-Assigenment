#include <stdio.h>

int main()
{
    int num;

    printf("Enter a Number : ");
    scanf("%d", &num);
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            printf("Not Prime Number\n");
            break;
        }
        else
        {
            printf("Prime Number\n");
            break;
        }
    }
    return 0;
}