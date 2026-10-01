#include <stdio.h>

int main(void) {

    int n;

    printf("input a integer: ");
    scanf("%d", &n);

    if (n>0) {
        printf("the integer is positive number.");
    }

    else if(n==0){
        printf("the integer is 0.");
    }

    else{
        printf("the integer is negative number.");
    }

    return 0;
}