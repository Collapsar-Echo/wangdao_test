#include <iostream>
#include <cstdio>

using namespace std;

int dayTable[2][13] = {                     //Ô¤´¦Àí
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

bool Isleapyear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int main() {
    int year,day, number;
    while (scanf("%d %d", &year, &number) != EOF) {
        int month = 0;
        while (number > dayTable[Isleapyear(year)][month]) {        
                number -= dayTable[Isleapyear(year)][month];
                month++;
        }
        day = number;
        printf("%04d-%02d-%02d", year, month, day);
    }
    return 0;
}