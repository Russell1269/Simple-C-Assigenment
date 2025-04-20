#include <stdio.h>

int main()
{
    float fahrenheit, celsius;
    printf("Inter Farhrenheit Temperature : \n");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    printf("In celsius : %.2f\n", celsius);

    return 0;
}