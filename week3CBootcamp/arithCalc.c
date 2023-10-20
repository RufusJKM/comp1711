#include <stdio.h>
int add (int a, int b){
    return a+b;
}int sub (int a, int b){
    return a-b;
}int times (int a, int b){
    return a*b;
}int div (int a, int b){
    return a/b;
}
int main(){
    int num1;
    int num2;
    char operator;
    printf("Enter the sum, space seperated... ");
    scanf("%d %c %d", &num1, &operator, &num2);
    if (operator == '-'){
        printf("Result... %d\n", sub(num1, num2));
    } else if (operator == '+'){
        printf("Result... %d\n", add(num1, num2));
    } else if (operator == 'x'){
        printf("Result... %d\n", times(num1, num2));
    }else if (operator == '/'){
        printf("Result... %d\n", div(num1, num2));
    } else{
        printf("Invalid input");
    }
}