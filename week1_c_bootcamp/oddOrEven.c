#include <stdio.h>
int main() {
    int inputNum, remainder;
    printf("Enter an integer: ");
    scanf("%d", &inputNum);
    remainder = inputNum % 2;
    if (remainder == 1) {
        printf("%d is odd\n", inputNum);
    } else {
        printf("%d is even\n", inputNum);
    }

    return 0;


}