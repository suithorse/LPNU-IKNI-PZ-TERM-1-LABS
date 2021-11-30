#include <stdio.h>
#include <conio.h>

#define HEIGHT 4
#define WIDTH 4

int main() {
    int matrix[HEIGHT][WIDTH] = {0};
    int *p1 = &matrix[0][0];
    int **p2 = &p1;

    for (int i = 0; i < (HEIGHT*WIDTH); ++i) {
            printf_s("Enter an element of the matrix:");
            scanf_s("%d", (p1 + i));
    }

    printf_s("The initial matrix:\n");
    for(int i = 0, j = 1; i < (HEIGHT*WIDTH); ++i, ++j) {
            printf_s("%d  ", *(*p2 + i));
            if(j % 4 == 0){
                printf_s("\n");
            }
    }

    int minInd, maxInd;
    for (int i = 0; i < HEIGHT; ++i) {
        minInd = 0;
        maxInd = 0;
        for (int j = 0; j < WIDTH; ++j) {
            if(matrix[i][j] < matrix[i][minInd]){
                minInd = j;
            }
            if(matrix[i][j] > matrix[i][maxInd]){
                maxInd = j;
            }
        }
        int box = matrix[i][i];
        matrix[i][i] = matrix[i][minInd];
        matrix[i][maxInd] = box;
        /*if(matrix[i][i] != matrix[i][maxInd]){
            matrix[i][maxInd] = box;
        } else {
            matrix[i][maxInd - 1] = box;
        }*/
    }

    printf_s("The finishing matrix:\n");
    for(int i = 0; i < HEIGHT; ++i){
        for(int j = 0; j < WIDTH; ++j){
            printf_s("%d  ", matrix[i][j]);
        }
        printf_s("\n");
    }


    _getch();
    return 0;
}
