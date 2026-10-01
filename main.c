#include <stdio.h>

int main(void) {

    int answer = 59;
    int n;
    int count = 0;

    do {
        printf("Guess a number: ");
        scanf("%d", &n);

        count ++;

        if (n < answer) {
            printf("Low!\n");
        }
        else if (n > answer) {
            printf("High!\n");
        }
    } while (n != answer);

    printf("Congratulation! trials: %d", count);

    return 0;
}