#include <stdio.h>

int powerCalc (int base, int exponent, int startNum){
    if (exponent == 0){
        return 1;
    } else if (exponent == 1){
        return startNum;
    } else{
        return (powerCalc(base, exponent-1, startNum*base));
    }
}

int main() {
    int base;
    int exponent;
    printf("Enter your base number... ");
    scanf("%d", &base);
    printf("Enter your exponent... ");
    scanf("%d", &exponent);
    int result = (powerCalc(base, exponent, base));
    printf("The result of %d to the power of %d is %d\n", base, exponent, result);

}