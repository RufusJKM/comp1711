#include <stdio.h>
int main() {
    int array1 [3] = {1, 2, 3};
    int array2 [3] = {4, 5, 6};
    int array3 [6];

    for (int i = 0; i < 6; i++){
        if (i > 2){
            array3[i] = array2[i-3];
        } else{
            array3[i] = array1[i];
        }
    }
    printf("Full array [");
    for (int i = 0; i < 6; i++){
        if (i <5){
            printf("%d, ", array3[i]);
        } else{
            printf("%d", array3[i]);
        }
    }
    printf("]\n");
}