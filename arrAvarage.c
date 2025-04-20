#include <stdio.h>

int main() {
    int a[5] = {15, 17, 12, 19, 13};
    int sum = 0;
    float average;

    for (int i = 0; i < 5; i++) {
        sum += a[i]; 
    }

    average = (float)sum / 5; //type casting to float

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
