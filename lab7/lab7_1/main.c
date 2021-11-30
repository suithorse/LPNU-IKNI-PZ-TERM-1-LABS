#include "funcs.h"
#define SIZE 20000

int main() {
    srand(time(NULL));
    float time1, time2;
    unsigned long arr1[SIZE];
    unsigned long arr2[SIZE];
    for(int i = 0; i < SIZE; ++i){
        arr1[i] = rand();
        arr2[i] = arr1[i];
    }
    checkSort(arr1, arr2, SIZE);
    sameArrs(arr1, arr2, SIZE);
    printf(" before sorting\n");
    time1 = clock()/(float) CLK_TCK;
    qs_sort(arr1, 0, (SIZE - 1));
    time2 = clock()/(float) CLK_TCK;
    printf("First array was sorted. Sorting took %.5lf seconds\n", (time2 - time1));

    time1 = clock()/(float) CLK_TCK;
    bubbleSort(arr2, SIZE);
    time2 = clock()/(float) CLK_TCK;
    printf("Second array was sorted. Sorting took %.5lf seconds\n", (time2 - time1));
    checkSort(arr1, arr2, SIZE);
    sameArrs(arr1, arr2, SIZE);
    printf(" after sorting\n");

    _getch();
    return 0;
}



