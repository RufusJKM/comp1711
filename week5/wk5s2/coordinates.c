#include <stdio.h>
#include <time.h> 

typedef struct{
    float x;
    float y;
} point;

float mDist(point Pi, point Pj){
    printf("Pi = (%f, %f)" Pi.x, Pi.y);
    printf("Pj = (%f, %f)" Pj.x, Pj.y);
    return 5;
}

int main() {
    point points[] = {
        {34.29, 87.54}, {13.50, 89.32}, {1.34, 9.89},
        {29.90, 50.21}, {16.50, 24.32}, {11.37, 19.69},
        {59.50, 58.61}, {47.56, 67.33}, {14.56, 23.79},
        {34.56, 29.65}
    };

    for (int i = 0; i < 10; i++){
        printf("(<%.2f>, <%.2f>)\n", points[i].x, points[i].y);
    }

    printf("What two points would you like to compare? ");
    int Pi;
    int Pj;
    scanf("%d, %d", &Pi, &Pj);
    int mDist = mDist(Pi, Pj);

}