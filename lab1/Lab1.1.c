# include <stdio.h>
# include <conio.h>
# include <math.h>


//21 варіант

int main(void)
{
    double u, v;

            printf("Enter u and v: ");
    start: scanf_s("%lf %lf", &u, &v);

    if(v < 0){
        printf("No, you should enter number 'v' so as it to be >= 0\n");
        printf("Enter some other u and v: ");
        goto start;
        //check if expression under the logarithm = 0 (it nearly impossible in this situation)
    } else if((cbrt(u) + pow(v, 0.25) + 2.0) <= 0) {
        printf("Bad numbers, expression under the logarithm must be > 0\n");
        printf("Enter some other u and v: ");
        goto start;
    } else {
        goto finish;
    }

    finish: double b = log10(cbrt(u) + pow(v, 0.25) + 2.0);
            printf("u=%lf v=%lf b=%lf\n", u, v, b);
            _getch();  //doesn't work without '_getch()' for some reason
            return 0;
}