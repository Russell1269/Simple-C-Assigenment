#include <stdio.h>

int main() {
    int choice;
    float area;

    printf("Choose the shape to calculate the area:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Right-Angle Triangle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            // Circle
            float radius;
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = 3.1416 * radius * radius;
            printf("The area of the circle is: %.2f\n", area);
            break;
        }
        case 2: {
            // Rectangle
            float length, width;
            printf("Enter the length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            area = length * width; 
            printf("The area of the rectangle is: %.2f\n", area);
            break;
        }
        case 3: {
            // Right-Angle Triangle
            float base, height;
            printf("Enter the base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height; 
            printf("The area of the right-angle triangle is: %.2f\n", area);
            break;
        }
        default:
            printf("Invalid choice. Please select 1, 2, or 3.\n");
    }

    return 0;
}
