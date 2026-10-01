#include <stdio.h>

int main(void) {

    int n, i;
    int sum = 0;

    printf("input a number: ");
    scanf("%d", &n);
    
    for (i = 0; i <= n; i++) {
        sum = sum + i;
    }

    printf("The result is %d.\n", sum);

    return 0;
}