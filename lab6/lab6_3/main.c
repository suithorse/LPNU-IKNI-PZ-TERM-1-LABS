#include <stdio.h>
#include <conio.h>
#define AREA(radius) (3.1415926535*(radius)*(radius))

int main() {
    double r = 0;
    printf("Enter your radius:");
    scanf_s("%lf", &r);
    if(r < 0){
        printf("Yor number is less than zero");
        _getch();
        return 0;
    }
    double area = AREA(r);
    printf("Circle radius = %lf, circle area = %lf", r, area);
    _getch();
    return 0;
}



