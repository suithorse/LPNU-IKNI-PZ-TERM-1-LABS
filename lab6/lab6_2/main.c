#include <stdio.h>
#include <conio.h>

void raw(int n, ...);

int main() {
    raw(1, 2, 3, 4, 5, 6, -1);
    _getch();
    return 0;
}

void raw(int n, ...){
    int result;
    printf("Your sequence:");
    for (int *p = &n; *p != -1; ++p){
        printf("%d ",*p);
    }

    for (int *p = &n; *p != -1;){
        if(*(p + 1) == -1){
            break;
        } else if(*p < *(p + 1)){
            ++p;
            result = 1;
        } else {
            result = 0;
            break;
        }
    }
    if(result == 1){
        printf("\nThis is an ascending sequence.");
    } else {
        printf("\nThis is not an ascending sequence.");
    }
}
