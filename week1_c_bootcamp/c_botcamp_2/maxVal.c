#include <stdio.h>
int main(){
    int nums [5] = {6, 2, 9, 13, 5};
    int max = 0;
    printf("Current array [");
    for (int i = 0; i < 5; i++){
        printf("%d, ", nums[i]);
        if (nums[i] > max){
            max = nums[i];
        }
    }
    printf("]\n");

    printf("The maximum value is %d\n", max);

}