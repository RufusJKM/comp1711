#include <stdio.h>
int main(){
    int nums [5];
    int initial = 2;
    for (int i = 0; i < 5; i++){
        nums[i] = (initial*i + 5);
        printf("%d, ", nums[i]);
    }
    int sum = 0;

    for (int i = 0; i < 5; i++){
        sum = sum + nums[i];
    }
    printf("The sum of the array is %d\n", sum);
}