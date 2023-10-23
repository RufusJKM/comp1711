#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename [] = "squares.dat";
    FILE *file = fopen(filename, "r");
    if (file == NULL){
        printf("Error opening file\n");
        return 1;
    }

    int bufferSize = 100;
    char bufferLine[bufferSize];
    float total;
    float count;

    while(fgets(bufferLine, bufferSize, file) != NULL){
        count++;
        total = total + atof(bufferLine);
    }
    printf("The average of the squares is %f\n", total/count);
}