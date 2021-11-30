#include <stdio.h>
#include <conio.h>
#include "functions.h"

int main(void){
        int array[SIZE][SIZE];
        printf("enter elements of the matrix:\n");
        for (int i = 0; i < SIZE; ++i) {
            for (int j = 0; j < SIZE; ++j) {
                scanf_s("%d", &array[i][j]);
            }
        }
        int sumA = mainSum(*array);
        int sumB = secondSum(*array);
        printf("Main diagonal = %d\n", sumA);
        printf("Secondary diagonal = %d\n", sumB);
        if(sumA > sumB){
            printf("Main diagonal elements sum is larger\n");
        } else if(sumB > sumA){
            printf("Secondary diagonal elements sum is larger\n");
        } else {
            printf("Main diagonal elements sum and secondary diagonal elements sum are equal\n");
        }
    printf("enter elements of the matrix:\n");
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            scanf_s("%d", &array[i][j]);
        }
    }
    sumA = mainSum(*array);
    sumB = secondSum(*array);
    printf("Main diagonal = %d\n", sumA);
    printf("Secondary diagonal = %d\n", sumB);
    if(sumA > sumB){
        printf("Main diagonal elements sum is larger\n");
    } else if(sumB > sumA){
        printf("Secondary diagonal elements sum is larger\n");
    } else {
        printf("Main diagonal elements sum and secondary diagonal elements sum are equal\n");
    }
    printf("enter elements of the matrix:\n");
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            scanf_s("%d", &array[i][j]);
        }
    }
    sumA = mainSum(*array);
    sumB = secondSum(*array);
    printf("Main diagonal = %d\n", sumA);
    printf("Secondary diagonal = %d\n", sumB);
    if(sumA > sumB){
        printf("Main diagonal elements sum is larger\n");
    } else if(sumB > sumA){
        printf("Secondary diagonal elements sum is larger\n");
    } else {
        printf("Main diagonal elements sum and secondary diagonal elements sum are equal\n");
    }
    printf("enter elements of the matrix:\n");
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            scanf_s("%d", &array[i][j]);
        }
    }
    sumA = mainSum(*array);
    sumB = secondSum(*array);
    printf("Main diagonal = %d\n", sumA);
    printf("Secondary diagonal = %d\n", sumB);
    if(sumA > sumB){
        printf("Main diagonal elements sum is larger\n");
    } else if(sumB > sumA){
        printf("Secondary diagonal elements sum is larger\n");
    } else {
        printf("Main diagonal elements sum and secondary diagonal elements sum are equal\n");
    }
    printf("enter elements of the matrix:\n");
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            scanf_s("%d", &array[i][j]);
        }
    }
    sumA = mainSum(*array);
    sumB = secondSum(*array);
    printf("Main diagonal = %d\n", sumA);
    printf("Secondary diagonal = %d\n", sumB);
    if(sumA > sumB){
        printf("Main diagonal elements sum is larger\n");
    } else if(sumB > sumA){
        printf("Secondary diagonal elements sum is larger\n");
    } else {
        printf("Main diagonal elements sum and secondary diagonal elements sum are equal\n");
    }
    _getch();
    return 0;
}

