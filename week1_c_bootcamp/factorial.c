#include <stdio.h>
int main() {
    int inputNum, factorial = 1;
    printf("Enter a number 1-10");
    scanf("%d", &inputNum);

    for (int i = inputNum ; i > 0 ; i--){
        factorial = i * factorial;
    }

    printf("The factorial of %d is %d\n", inputNum , factorial);

    return 0;
}