#include <stdio.h>

int main() {
    int a[7] = {15, 17, 12, 19, 13, 11, 16};
    int smallest = a[0];

    for (int i = 1; i < 7; i++) {
        if (a[i] < smallest) {
            smallest = a[i];
        }
    }

    printf("Smallest element = %d\n", smallest);

    return 0;
}
