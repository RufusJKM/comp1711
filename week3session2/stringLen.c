#include <stdio.h>
#include <stdbool.h>
int stringLen(char string[100]){
    int pointer = 100;
    do{
       pointer--;
    }while (string[pointer] != 0);
    pointer = 100 - pointer;
    return pointer;
}

int main() {
    char string[100];
    printf("Enter a string of under 100 characters\n");
    scanf("%s", string);
    printf("%d\n", stringLen(string));
}