#include <stdio.h>

float areaOfCircle(int r)
{
    return 3.1416 * r * r;
}

int main()
{
    int n;
    printf("Enter the radius of the circle: ");
    scanf("%d", &n);

    
    printf("Area of the circle is: %.2f\n", areaOfCircle(n));

    return 0;
}