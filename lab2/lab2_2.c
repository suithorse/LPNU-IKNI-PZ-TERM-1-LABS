#include <stdio.h>
#include <conio.h>
#include <math.h>


int main(void) {
    long double A, B, S;

    do{
        printf("Enter borders A and B:");
        scanf_s("%lf %lf", &A, &B);
        printf("Enter step:");
        scanf_s("%lf", &S);
        if(A > B || S == 0 || fabsl(S) >= 1 || fabsl(A) >= 1 || fabsl(B) >= 1){
            printf("Wrong numbers, please, try again.\n");
        }
    }
    while(A > B || S == 0 || fabsl(S) >= 1 || fabsl(A) >= 1 || fabsl(B) >= 1);

    double eps = 0.;
    printf("Enter eps:");
    scanf_s("%lf", &eps);

    printf("X                 f(x)                  g(x)                diff\n");
    int i = 0;
    long double x = A;
    long double F, G, diff;


    while((x >= A) && (x <= B)){
        i = 2;
        F = powl((1 - x), -2);
        G = 1 + i * x;
        diff = fabsl((F - G));

        while(diff > eps){
            i += 1;
            G = G + (powl(x, (i - 1)) * i);
            diff = fabsl((F - G));

        }
        printf("%.10Lf       %.10Lf         %.10Lf         %.10Lf\n", x, F, G, diff);
        x += S;
    }

    _getch();
    return 0;
}
