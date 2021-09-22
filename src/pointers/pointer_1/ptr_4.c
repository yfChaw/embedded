/*
    Print an array of elements using pointer
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    int arr[] = {8,6,4,2,10};
    int len = sizeof(arr)/sizeof(int);
    for(int i=0; i<len; i++){
        printf("Element %d: %d\n", i+1, *(arr+i));
    }
    return 0;
}

//arr[i] vs *(arr+i)