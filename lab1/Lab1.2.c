#include <stdio.h>
#include <conio.h>

//Варіант 21
int main(void) {

    float arr[10];
    start: printf(" Enter 10 positive numbers:");
    scanf_s("%f %f %f %f %f %f %f %f %f %f", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7], &arr[8], &arr[9]);

    if(arr[0] <= 0){printf("Noo, you must enter 10 positive numbers! "); goto start;}
    if(arr[1] <= 0){printf("Noo, you must enter 10 positive numbers! "); goto start;}
    if(arr[2] <= 0){printf("Noo, you must enter 10 positive numbers! "); goto start;}
    if(arr[3] <= 0){printf("Noo, you must enter 10 positive numbers! "); goto start;}
    if(arr[4] <= 0){printf("Noo, you must enter 10 positive numbers! "); goto start;}
    if(arr[5] <= 0){printf("Noo, you must enter 10 positive numbers! "); goto start;}
    if(arr[6] <= 0){printf("Noo, you must enter 10 positive numbers! "); goto start;}
    if(arr[7] <= 0){printf("Noo, you must enter 10 positive numbers! "); goto start;}
    if(arr[8] <= 0){printf("Noo, you must enter 10 positive numbers! "); goto start;}
    if(arr[9] <= 0){printf("Noo, you must enter 10 positive numbers! "); goto start;}

    float arithMean = (arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5] + arr[6] + arr[7] + arr[8] + arr[9]) / 10.f;
    printf_s(" Arithmetic mean: %f\n", arithMean);
    int biggerNumber = 0;
    if(arr[0] > arithMean){
        biggerNumber++;
    }
    if(arr[1] > arithMean){
        biggerNumber++;
    }
    if(arr[2] > arithMean){
        biggerNumber++;
    }
    if(arr[3] > arithMean){
        biggerNumber++;
    }
    if(arr[4] > arithMean){
        biggerNumber++;
    }
    if(arr[5] > arithMean){
        biggerNumber++;
    }
    if(arr[6] > arithMean){
        biggerNumber++;
    }
    if(arr[7] > arithMean){
        biggerNumber++;
    }
    if(arr[8] > arithMean){
        biggerNumber++;
    }
    if(arr[9] > arithMean){
        biggerNumber++;
    }
    printf(" Numbers more than arithmetic mean: %d\n", biggerNumber);

    float biggestNumber = 0;
    float secondBiggestNumber = 0;
    int biggestNumberIndex = 0;
    int secondBiggestNumberIndex = 0;

    biggestNumber = arr[0];
    if(biggestNumber < arr[1]){biggestNumber = arr[1]; biggestNumberIndex = 1;}
    if(biggestNumber < arr[2]){biggestNumber = arr[2]; biggestNumberIndex = 2;}
    if(biggestNumber < arr[3]){biggestNumber = arr[3]; biggestNumberIndex = 3;}
    if(biggestNumber < arr[4]){biggestNumber = arr[4]; biggestNumberIndex = 4;}
    if(biggestNumber < arr[5]){biggestNumber = arr[5]; biggestNumberIndex = 5;}
    if(biggestNumber < arr[6]){biggestNumber = arr[6]; biggestNumberIndex = 6;}
    if(biggestNumber < arr[7]){biggestNumber = arr[7]; biggestNumberIndex = 7;}
    if(biggestNumber < arr[8]){biggestNumber = arr[8]; biggestNumberIndex = 8;}
    if(biggestNumber < arr[9]){biggestNumber = arr[9]; biggestNumberIndex = 9;}

    secondBiggestNumber = arr[0];
    if(secondBiggestNumber < arr[1] && arr[secondBiggestNumberIndex] <= arr[biggestNumberIndex] && 1 != biggestNumberIndex){secondBiggestNumber = arr[1]; secondBiggestNumberIndex = 1;}
    if(secondBiggestNumber < arr[2] && arr[secondBiggestNumberIndex] <= arr[biggestNumberIndex] && 2 != biggestNumberIndex){secondBiggestNumber = arr[2]; secondBiggestNumberIndex = 2;}
    if(secondBiggestNumber < arr[3] && arr[secondBiggestNumberIndex] <= arr[biggestNumberIndex] && 3 != biggestNumberIndex){secondBiggestNumber = arr[3]; secondBiggestNumberIndex = 3;}
    if(secondBiggestNumber < arr[4] && arr[secondBiggestNumberIndex] <= arr[biggestNumberIndex] && 4 != biggestNumberIndex){secondBiggestNumber = arr[4]; secondBiggestNumberIndex = 4;}
    if(secondBiggestNumber < arr[5] && arr[secondBiggestNumberIndex] <= arr[biggestNumberIndex] && 5 != biggestNumberIndex){secondBiggestNumber = arr[5]; secondBiggestNumberIndex = 5;}
    if(secondBiggestNumber < arr[6] && arr[secondBiggestNumberIndex] <= arr[biggestNumberIndex] && 6 != biggestNumberIndex){secondBiggestNumber = arr[6]; secondBiggestNumberIndex = 6;}
    if(secondBiggestNumber < arr[7] && arr[secondBiggestNumberIndex] <= arr[biggestNumberIndex] && 7 != biggestNumberIndex){secondBiggestNumber = arr[7]; secondBiggestNumberIndex = 7;}
    if(secondBiggestNumber < arr[8] && arr[secondBiggestNumberIndex] <= arr[biggestNumberIndex] && 8 != biggestNumberIndex){secondBiggestNumber = arr[8]; secondBiggestNumberIndex = 8;}
    if(secondBiggestNumber < arr[9] && arr[secondBiggestNumberIndex] <= arr[biggestNumberIndex] && 9 != biggestNumberIndex){secondBiggestNumber = arr[9]; secondBiggestNumberIndex = 9;}


    printf(" Numbers of two of the biggest numbers: %d, %d (indexes: %d, %d)\n", (biggestNumberIndex + 1), (secondBiggestNumberIndex + 1), biggestNumberIndex, secondBiggestNumberIndex);

    _getch(); //doesn't work without 'getch()' for some reason
    return 0;
}
