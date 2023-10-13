#include <stdio.h>
int main(){
    int nums [5] = {1, 2, 3, 4, 5};
    printf("Current array [");
    int temp = nums[4];

    for (int i = 0; i < 5; i++){
        if (i <4){
            printf("%d, ", nums[i]);
        } else{
            printf("%d", nums[i]);
        }
    }
    printf("]\n");

    for (int i = 4; i >= 0; i--){
        if (i > 0){
            nums[i] = nums[i-1];
        } else{
            nums[i] = temp;
        }
        
    }

    printf("New array [");
    for (int i = 0; i < 5; i++){
        if (i <4){
            printf("%d, ", nums[i]);
        } else{
            printf("%d", nums[i]);
        }
    }
    printf("]\n");
}