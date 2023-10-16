#include <stdio.h>
int main() {
    printf("Enter a number... ");
    int number;
    scanf("%d", &number);

    if ((number % 4 == 0) && (number % 5 == 0)){
        printf("%d can be divided by 4 and 5\n", number);
    } else{
        printf("%d cannot be divided by both 4 and 5\n", number);
    }
    return 0;

}