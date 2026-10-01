#include <stdio.h>

int main(void) {

    int a, b;
    char op; //operator

    printf("enter the calculation: ");
    scanf("%d %c %d", &a, &op, &b);

    if (op == '+') {
        printf("= %d", a+b);
    }
    else if (op == '-') {
        printf("= %d", a-b);
    }
    else if (op == '*') {
        printf("= %d", a*b);
    }
    else if (op == '/') {
        printf("= %d", a/b);
    }
    else if (op == '%') {
        printf("= %d", a%b);
    }

    return 0;
}