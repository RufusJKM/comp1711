#include <stdio.h>

int main() {
    char filename [] = "squares.dat";
    FILE *file = fopen(filename, "w");
    if (file == NULL){
        printf("Error opeing file");
        return 1;
    }
    printf("How many squares would you like? ");
    int numSquares;
    scanf("%d", &numSquares);

    for (int i = 1; i <= numSquares; i++){
        fprintf(file, "%d\n", i*i);
    }

    fclose(file);
    return 0;
}