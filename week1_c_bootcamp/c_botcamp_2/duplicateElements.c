#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
int main() {
    //generate random array
    srand(time(0));
    int ranArray [6];
    printf("Random array [");
    for (int i = 0; i < 6; i ++){
        ranArray[i] = rand() % 5 + 1;
        if (i <5){
            printf("%d, ", ranArray[i]);
        } else{
            printf("%d", ranArray[i]);
        }
    }
    printf("]\n");

    for (int i = 0; i < 6; i++){
        int count = 0;
        for (int j = 0; j < 6; j++){
            if (ranArray[i] == ranArray[j] && j < i){

            } else{
                if (ranArray[i] == ranArray[j]){
                count++;
            }
            }
        }
        if (count > 1){
                printf("There are %d %d's in the array\n", count, ranArray[i]);
            }
    }
}