#include <math.h>
#include <stdio.h>

double f(double x){
    return x/(pow(x, 2)+3);
}

void forTab(double a, double b, double h){
    printf("x\t\t\t\tf(x)\n");
    for (double i = a; i <= b; i += h){
        printf("%lf\t\t%lf\n", i, f(i));
    }
}

void whileTab(double a, double b, double h){
    printf("x\t\t\t\tf(x)\n");
    double i = a;
    while(i >= a && i <= b){
        printf("%lf\t\t%lf\n", i, f(i));
        i += h;
    }
}

void doWhileTab(double a, double b, double h){
    printf("x\t\t\t\tf(x)\n");
    double i = a;
    do{
        printf("%lf\t\t%lf\n", i, f(i));
        i += h;
    }while(i >= a && i <= b);
}

