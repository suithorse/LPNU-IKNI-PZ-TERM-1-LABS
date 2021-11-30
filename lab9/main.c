#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    int k = 0, n = 0, size, columnNumber = 0;
    printf("Enter number of columns:");
    scanf_s("%d", &n);
    printf("Enter number of rows:");
    scanf_s("%d", &k);
    size = k*n;
    int* arr1 = (int*)malloc(size*sizeof(int));
    int* p1 = arr1;
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < size; ++i, ++p1){
        scanf_s("%d", p1);
    }
    printf("In which column do you want to find the lowest element?:");
    scanf_s("%d", &columnNumber);
    if(columnNumber > n){
        printf("Wrong number!");
        _getch();
        return 0;
    }
    p1 = arr1 + columnNumber - 1;
    int* arr2 = (int*)malloc(k*sizeof(int));
    int* p2 = arr2;
    for(int i = 0; i < k; ++i, p1 += n, ++p2){
        *p2 = *p1;
    }

    free(arr1);
    p2 = arr2;

    int min = *p2;
    for(int i = 0; i < k; ++i)
    {
        if(*(p2 + i) < min)
        {
            min = *(p2 + i);
        }
    }

    printf("The lowest element in column %d is %d", columnNumber, min);

    free(arr2);

    _getch();
    return 0;
}
