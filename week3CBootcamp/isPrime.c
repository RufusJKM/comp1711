#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num){
    if (num%2 ==0){
        return false;
    } else{
        for (int i = 3; i < num/2; i = i+2){
            if(num%i == 0){
                return false;
            }
        }
        return true;
    }
}
int main(){
    printf("Enter a number... ");
    int num;
    scanf("%d", &num);
    if (isPrime(num) == true){
        printf("%d is prime!\n", num);
    } else{
        printf("%d is not prime!\n", num);
    }
}