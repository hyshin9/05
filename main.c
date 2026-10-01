#include <stdio.h>

int main(void) {

    int n;

    printf("input an integer: ");
    scanf("%d", &n);

    if (n>0) {
        printf("absolute value is %d.", n);
    }

    else{
        printf("absolute value is %d.", -n);
    }

    return 0;
}