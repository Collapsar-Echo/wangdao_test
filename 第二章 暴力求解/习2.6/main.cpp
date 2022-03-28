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
int numberd(int year,int month,int day) {
    int number = 0;
    for (int i = 1; i < year; ++i) {
        if (Isleapyear(i)) {
            number += 366;
        }
        else {
            number += 365;
        }
    }
    int m = Isleapyear(year);

    for (int j = 0; j < month; ++j) {
        number += dayTable[m][j];
    }
    number += day;
    return number;
}

int main() {
    int year, month, day;
    int year1, month1, day1;
    while (scanf("%04d%02d%02d", &year, &month, &day) != EOF) {
        scanf("%04d%02d%02d", &year1, &month1, &day1);
        printf("%d\n", abs(numberd(year, month, day) - numberd(year1, month1, day1)) + 1);
    }
    return 0;
}