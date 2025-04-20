
#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a; // pointer p points to the address of a

    printf("Value of a: %d\n", a); // prints 10
    printf("Address of a: %p\n", &a); // prints address of a
    printf("Value of p: %p\n", p); // prints address of a
    printf("Value pointed by p: %d\n", *p); // prints 10

    return 0;
}