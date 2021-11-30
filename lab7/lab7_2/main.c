#include "functions.h"

int main() {
    double a = 1, b = 3, h;
    char ch;

    void (*p1)(double , double , double ) = &forTab;
    void (*p2)(double , double , double ) = &whileTab;
    void (*p3)(double , double , double ) = &doWhileTab;
    printf("Enter step:");
    scanf_s("%lf", &h);
    if(h <= 0){
        printf("Wrong step value");
        _getch();
        return 0;
    }

    printf("Which method do you want to use? f/w/d\n");
    scanf(" %c", &ch);
    if(ch == 'f'){
        printf("Tabulation using \"for\":\n");
        p1(a, b, h);
    } else if(ch == 'w'){
        printf("Tabulation using \"while\":\n");
        p2(a, b, h);
    } else if(ch == 'd'){
        printf("Tabulation using \"do...while\":\n");
        p3(a, b, h);
    } else {
        printf("There is no such method.");
    }
    _getch();
    return 0;
}
