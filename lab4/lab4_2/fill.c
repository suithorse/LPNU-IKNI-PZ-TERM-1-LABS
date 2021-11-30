#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void){
    FILE *file = NULL;
    double u, v;

    printf_s("enter U and V:");
    scanf_s("%lf %lf", &u, &v);
    if(v < 0 || (cbrt(u) + pow(v, 0.25) + 2.0) <= 0){
        printf_s("Bad numbers, try again");
        _getch();
        return 0;
    }

    file = fopen("input.bin", "wb");
    fwrite(&u, sizeof(double), 1, file);
    fwrite(&v, sizeof(double), 1, file);
    fclose(file);

    _getch();
    return 0;
}
