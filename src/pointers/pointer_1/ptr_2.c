/*
    Add 2 numbers using call by reference
*/

#include <stdio.h>
#include <stdlib.h>

int sum(int *, int *);

int main(){
    int num1, num2, add;
    num1 = 345;
    num2 = 543;
    add = sum(&num1, &num2);
    printf("\nSum: %d \n\n", add);

    return 0;
}

int sum(int *a, int *b){
    return *a + *b;
}
