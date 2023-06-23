#include <stdio.h>

void const_pointer1() {
    int a = 5;
    int b = 10;
    const int* pa = &a;

    // exception
    // *pa = 3;
    pa = &b;
    printf("1 - pa value: %d\n", *pa);
}

void const_pointer2() {
    int a = 5;
    int b = 10;
    int* const pa = &a;

    *pa = 3;
    // exception
    // pa = &b;

    printf("2 - pa value: %d\n", *pa);
}

void const_pointer3() {
    int a = 5;
    int b = 10;
    const int* const pa = &a;

    // exception
    // *pa = 3;
    // pa = &b;
    printf("3 - pa value: %d\n", *pa);
}

int main(void) {
    const_pointer1();
    const_pointer2();
    const_pointer3();
    return 0;
}