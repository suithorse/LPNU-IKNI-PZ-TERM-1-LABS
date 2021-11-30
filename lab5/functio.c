#include <stdio.h>

double result(double x){
    double y;
    y = x/(x*x + 3);
    return y;
}

double resulty(double x, double *y){
    *y = x/(x*x + 3);
    if(*y == 0){
        return 0;
    } else if(*y > 0){
        return 1;
    } else{
        return -1;
    }
}

void tab (double x, double first, double second){
    printf("%lf\t\t%lf\t\t%lf\n", x, first, second);
    return;
}
