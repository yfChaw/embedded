/*
    Find factorial using pointers
*/
#include <stdio.h>

void factorial(int, int *);

int main(){

    int num = 12;
    int fact = 1;
    factorial(num, &fact);
    printf("Factorial of %d: %d\n", num, fact);
    return 0;
}

void factorial(int num, int *fact){
    for(int i=1; i<=num; i++){
        *fact *= i;
    }
}