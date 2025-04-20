//don't run this code
//don't run this code
//don't run this code

#include <stdio.h>

int main(){
    printf("In which method do you want to run the infinite loop?\n");
    printf("1. while loop\n");
    printf("2. for loop\n");
    printf("3. do while loop\n");
    int choice;
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            // Infinite loop using while loop
            int i = 0;
            while (1) {
                printf("Infinite loop using while loop: %d\n", i++);
            }
            break;
        }
        case 2: {
            // Infinite loop using for loop
            for (int i = 0; ; i++) {
                printf("Infinite loop using for loop: %d\n", i);
            }
            break;
        }
        case 3: {
            // Infinite loop using do while loop
            int i = 0;
            do {
                printf("Infinite loop using do while loop: %d\n", i++);
            } while (1);
            break;
        }
        default:
            printf("Invalid choice!\n");
    }
}

//don't run this code