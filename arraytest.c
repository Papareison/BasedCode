#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    int array[4];
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;
    printf("Normal reference: %d\n", array[0]);
    printf("Weird reference: %d\n", 0[array]);
    printf("Dereference test: %d\n", *(array + sizeof(int) * 2));

    return EXIT_SUCCESS;
}