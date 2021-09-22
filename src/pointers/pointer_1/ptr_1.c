/*
 Add two number using pointers
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, sum, *ptr_a, *ptr_b;
    a = 100;
    b = 999;
    ptr_a = &a;
    ptr_b = &b;
    sum = *ptr_a + *ptr_b;

    printf("\nSum: %d\n\n", sum);

    return 0;
}

