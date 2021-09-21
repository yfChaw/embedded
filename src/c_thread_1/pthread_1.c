#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

// void *wk_thd_func(void *ptr_thd);
void *wk_thd_func(void *ptr_thd){
    // cast this unique value
    long * unique_id = (long*) ptr_thd;
    printf("This thread's unique id: %ld \n", *unique_id);
}

int main(void){

    pthread_t thread_1;
    
    int err = pthread_create(&thread_1, NULL, wk_thd_func, (void *)&thread_1); //(void *)&thread_1
    printf("Error: %d", err);
    
    pthread_exit(NULL);
    return 0;
}


