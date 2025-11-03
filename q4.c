#include <stdio.h>


void swapPointer(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nOriginal values: a = %d, b = %d", a, b);

    int temp = a;
    a = b;
    b = temp;
    printf("\nAfter temp variable swap: a = %d, b = %d", a, b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("After arithmetic swap: a = %d, b = %d\n", a, b);


    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After XOR swap: a = %d, b = %d\n", a, b);

    
    swapPointer(&a, &b);
    printf("After pointer swap: a = %d, b = %d", a, b);

    return 0;
}
