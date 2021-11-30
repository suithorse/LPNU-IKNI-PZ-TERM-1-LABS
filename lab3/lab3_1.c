#include <stdio.h>
#include <conio.h>

#define SIZE 10

int main() {

    int maxElIndex = 0, minElIndex = 0;
    double maxEl = 0;
    double vec[SIZE] = {0};
    double *p = vec;
    printf_s("Enter %d elements of the vector:", SIZE);
    for (int i = 0; i < SIZE; ++i){
        scanf_s("%lf", &vec[i]);
    }

    printf_s("Array before the operations: \n{");
    for(int i = 0; i < SIZE; ++i){
        printf_s(" %lf ", vec[i]);
    }
    printf_s("}\n");

    for(int i = 0; i < (SIZE - 1); ++i){
        if(vec[maxElIndex] <= *(p + i)){
            maxElIndex = i;
            maxEl = vec[maxElIndex];
        }
        if(vec[minElIndex] >= *(p + i)){
            minElIndex = i;
        }
    }

    double sum = 0;
    for (int i = 0; i < SIZE; ++i) {
        if(vec[i] < 0){
            sum += -(vec[i]);
        }
    }

    maxEl /= sum;
    vec[maxElIndex] = maxEl;

    if(minElIndex == 0 || minElIndex == (SIZE - 1)){
        printf_s("Min element is extreme\n");
    } else {
        double box = vec[minElIndex + 1];
        vec[minElIndex + 1] = vec[minElIndex - 1];
        vec[minElIndex - 1] = box;
    }

    printf_s("Array after the operations: \n{");
    for(int i = 0; i <= (SIZE - 1); ++i){
        printf_s(" %p ", &vec[i]);
    }
    printf_s("}\n");

    _getch();
    return 0;
}
