#include <stdio.h>
int main() {
    printf("Enter the mark... ");
    int mark;
    scanf("%d", &mark);

    if (mark < 50) {
        printf("That is a fail\n");
    } else if (mark < 70) {
        printf("That is a pass\n");
    } else {
        printf("That is a distinction\n");
    }
    return 0;
}