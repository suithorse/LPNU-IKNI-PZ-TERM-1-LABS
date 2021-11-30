#include <stdio.h>
#include <conio.h>
#include <ctype.h>

#define SIZE 100

int main(void){
    char sent[SIZE];
    char ch1, ch2, ch3;
    int num1 = 0, num2 = 0, num3 = 0;
    printf_s("Enter your sentence:");
    fgets(sent, SIZE, stdin);
    printf_s("Enter three letters you want to count:\n");
    scanf("%c %c %c", &ch1, &ch2, &ch3);
    if(tolower(ch1) == tolower(ch2) || tolower(ch1) == tolower(ch3) || tolower(ch2) == tolower(ch3)){
      printf_s("You entered similar letters");
        _getch();
        return 0;
    }

    for(int i = 0; *(sent + i) != '.'; ++i){
        if(tolower(*(sent + i)) == tolower(ch1)){
            ++num1;
        } else if(tolower(*(sent + i)) == tolower(ch2)){
            ++num2;
        } else if(tolower(*(sent + i)) == tolower(ch3)){
            ++num3;
        }
    }

    printf_s("%c - %d; %c - %d; %c - %d", ch1, num1, ch2, num2, ch3, num3);

    _getch();
    return 0;
}