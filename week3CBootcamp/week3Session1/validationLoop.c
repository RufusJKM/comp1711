#include <stdio.h>
#include <stdbool.h>
int main() {
    int number;
    do {
        printf("Enter a number 1-100... ");
        scanf("%d", &number);
        if (number <= 100 && number >= 1) {
            printf("This is a valid number\n");
        } else {
            printf("This is an invalid number\n");
        }
    } while (number != -1);
    printf("Program terminated\n");
    return 0;
}