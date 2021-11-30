#include <stdio.h>
#include <conio.h>

void dataGroup(int size);
int k = 0;

int main() {
    printf("Enter group of elements. Finish it with 0:");
    dataGroup(1);
    printf("\nNumber of elements: %d", k);
    _getch();
    return 0;
}

void dataGroup(int size){
    int i;
    scanf_s("%d", &i);
    if(i != 0){
        ++k;
        dataGroup(size + 1);
        printf("#%d - %d ", size, i);
    }
}
