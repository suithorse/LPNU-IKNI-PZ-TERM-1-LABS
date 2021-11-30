#ifndef LAB6_1_FUNCTIONS_H
#define LAB6_1_FUNCTIONS_H
#define SIZE 4
int mainSum(int* array){
    int sum = 0;
    for(int i = 0; i < SIZE; ++i){
        sum += *(array + i*(SIZE) + i);
    }
    return sum;
}

int secondSum(int* array){
    int sum = 0;
    for (int i = 0; i < SIZE; ++i) {
        sum += *(array + i*(SIZE - 1) + SIZE - 1);
    }
    return  sum;
}


#endif
