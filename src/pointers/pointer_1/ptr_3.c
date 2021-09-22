/*
    Find max number between 2 numbers using pointers
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b, *ptra, *ptrb, max;
    a = 999;
    b = 1;
    ptra = &a;
    ptrb = &b;

    if(*ptra > *ptrb){
        max = *ptra;
    }else{
        max = *ptrb;
    }

    printf("\nMax num: %d\n\n", max);

    return 0;
}