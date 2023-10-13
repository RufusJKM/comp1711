#include <stdio.h>

int main(){
    int nums [5] = {1, 2, 3, 4, 5};
    printf("Current array [");

    for (int i = 0; i < 5; i++){
        printf("%d, ", nums[i]);
    }
    printf("]\n");

    printf("Reversed array [");
    for (int i = 4; i >= 0; i--){
        printf("%d, ", nums[i]);
    }
    printf("]\n");
}