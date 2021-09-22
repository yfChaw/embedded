/*
    Print Permutations of given string using pointers
*/

#include <stdio.h>
#include <string.h>

void swap(char *, char *);
void permutation(char *, int, int);

int main(){

    char str[] = "ABCD";
    int len = strlen(str);
    permutation(str, 0, len-1); //str is pointer to first element
    return 0;
}

void permutation(char *c, int left, int right){
    if(left == right){
        //print string
        printf("String %s\n", c);
    }else{
        
        for(int i=left; i<=right; i++){
            // perform swaping
            swap(c+left, c+i);
            //continue permutation recursion
            permutation(c, left+1, right);
            swap((c+left), (c+i));
        }
    }
}

void swap(char *a, char *b){
    // printf("Before swapping: %c , %c\n", *a, *b);
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
    // printf("After swapping: %c , %c\n\n", *a, *b);
}