#include <stdio.h>
int main() {
    printf("Enter a number... ");
    int number;
    scanf("%d", &number);

    if (number < 0){
        printf("%d is negative\n", number);
    } else if (number < 1){
        printf("That is zero\n");
    } else {
        printf("%d is positive\n", number);
    }
    return 0;
}