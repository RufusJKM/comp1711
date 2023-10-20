#include <stdio.h>
float circleArea(float rad){
    float area = rad*rad*3.14;
    return area;
}
float sphereVol(float rad){
    float volume = (4/3)*3.14*rad*rad*rad;
}
int main() {
    float radius;
    printf("Enter the radius... ");
    scanf("%f", &radius);
    float area = circleArea(radius);
    float volume = sphereVol(radius);
    printf("The area of the circle is %.2f\nThe volume of the sphere is %.2f\n", area, volume);
}
