#include "funcs.h"
#include <stdio.h>
#include <conio.h>

int main(void) {
    double a = 1, b = 3, h = 0, x = a, y = 0, y1 = 0;
    printf("Enter step:");
    scanf_s("%lf", &h);
    printf("X\t\t\tMethod1\t\t\tMethod2\n");
    while(x >= a && x <= b){
        y1 = result(x);
        resulty(x, &y);
        tab(x, y1, y);
        x += h;
    }
    _getch();
    return 0;
}
