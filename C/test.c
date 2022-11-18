#include <stdio.h>
#include <stdlib.h>

int main() {
    int *number = malloc(sizeof(int));

    *number = 345;

    printf("Number is %i\n", *number);
    printf("Address is %u\n", number);


    return 0;
}