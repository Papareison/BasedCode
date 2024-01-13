#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int32_t readable_absolute(int32_t i){
    int32_t temp = i >> 31;
    int32_t result = i ^ temp;
    return result - temp;
}

int main (int argc, char *argv[]) {
    int j;
    int32_t i = -5;
    int32_t result;
    result = readable_absolute(i);
    j = (int)result;
    printf("%d", j);
    return EXIT_SUCCESS;
}

