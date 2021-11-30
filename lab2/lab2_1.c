#include <stdio.h>
#include <conio.h>


//Варіант 21
int main() {
    int numerator = 0;
    int denominator = 0;
    printf("Enter numerator and denominator:");
    scanf_s("%d %d", &numerator, &denominator);
    while(denominator == 0){
        printf("No, denominator cannot be equal to zero. Enter denominator again, please:");
        scanf_s("%d", &denominator);
    }

    //Створюємо змінну та перевірку, яке з значень є більше
    int k = 0;
    if(numerator > denominator){
        k = numerator;
    } else if (denominator > numerator){
        k = denominator;
    } else {
        //Варіант, коли чисельник та знаменник рівні
        printf("Numerator after abbreviation = 1, denominator after abbreviation = 1");
        _getch();
        return 0;
    }

    //Максимально скорочуємо, віднімаючи від максимального значення одиницю та перевіркою на ділення без остачі
    for(; k != 0; --k){
        if(numerator % k == 0 && denominator % k == 0){
            numerator /= k;
            denominator /= k;
        }
    }
    printf("Numerator after abbreviation = %d, denominator after abbreviation = %d", numerator, denominator);

    _getch();
    return 0;
}
