/*
    Simple Struct with pointers
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct simple_person{
    // char *name;
    char name[20];
    char *address; // pointer not yet initialised
    int *hp;

};

int main(){
    struct simple_person person, *ptr_person;
    ptr_person = &person;
    
    strcpy(person.name, "Elmo"); //"Elmo" will be const char* 
    printf("Name: %s\n", person.name);

    //https://stackoverflow.com/questions/10326586/segmentation-fault-with-strcpy
    ptr_person->address = (char *) malloc(50); // have to allocate memory to "address", otherwise seg fault
    strcpy(ptr_person->address, "Sesame Street");
    printf("Address: %s\n", ptr_person->address);

    person.hp = (int *) malloc(10);
    *(person.hp) = 12345678;
    printf("Hp Number: %d\n", *(person.hp));

    printf("Address again: %s\n", (*ptr_person).address);
    printf("Hp again: %d\n", *((*ptr_person).hp));
    
    return 0;
}