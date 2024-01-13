#include <stdio.h>

void int_required(long longint){
    return longint++;
}

int main(){
    float y = 0;
    long i;
    i = *(long *)&y;

    int_required(i);
    printf("i = %d", i);
}

