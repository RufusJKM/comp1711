#include <stdio.h>
#include <stdbool.h>
int main() {
    bool valid = true;
    do{
        printf("Welcome to the Queen's Hotel. What service do you require\n1) Room Service\n2) Make a Call\n3) Book a Room\n4) Check out\n5) Check in\n");
        int choice;
        scanf("%d", &choice);

        switch (choice){
            case 1:
            printf("Valid\n");
            valid = true;
            break;

            case 2:
            printf("Valid\n");
            valid = true;
            break;

            case 3:
            printf("Valid\n");
            valid = true;
            break;

            case 4:
            printf("Valid\n");
            valid = true;
            break;

            case 5:
            printf("Valid\n");
            valid = true;
            break;

            default:
            printf("Invalid\n");
            valid = false;
        }
    } while (valid == false);
}