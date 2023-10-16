#include <stdio.h>
int main() {
    printf("Enter the temperature... ");
    int temp;
    scanf("%d", &temp);

    if (temp < -10) {
        printf("Temperature is too low\n");
    } else if (temp <= 40){
        printf("Valid temperature\n");
    } else{
        printf("Temperature too high\n");
    }
    return 0;
}