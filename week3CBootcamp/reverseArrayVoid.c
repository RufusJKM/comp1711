#include <stdio.h>
void reverseArray (int intArr[], int length){
    int newArr[length];
    for (int i = length-1; i >= 0; i--){
        newArr[length-1-i] = intArr[i];
    }
    for (int i = 0; i < length; i++){
        intArr[i] = newArr[i];
    }

}
int main() {
    int intArr[5] = {1,2,3,4,5};
    reverseArray(intArr, 5);
    for (int i = 0; i < 5; i++){
        printf("%d ", intArr[i]);
    }
    printf("\n");
}