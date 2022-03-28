#include<iostream>
#include<cstdio>

using namespace std;

int dayTable[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

bool IsLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int NumberOfYear(int year) {                    //返回该年天数
    if (IsLeapYear(year)) {
        return 366;
    }
    else {
        return 365;
    }
}

int main() {
    int year, month, day;
    int number = 0;
    int n, m;
    scanf("%d", &m);
    while (m--) {
        scanf("%d %d %d %d", &year, &month, &day, &n);
        int i = IsLeapYear(year);
        int number = 0;
        for (int j = 0; j < month; ++j) {
            number += dayTable[i][j];
        }
        number += day;
        number += n;
        if (number - NumberOfYear(year) < 0) {
            int month = 0;
            while (number > dayTable[IsLeapYear(year)][month]) {
                number -= dayTable[IsLeapYear(year)][month];
                month++;
            }
            day = number;
            printf("%04d-%02d-%02d\n", year, month, day);
        }
        else {
            number = number - NumberOfYear(year);
            int month = 0;
            while (number > dayTable[IsLeapYear(year + 1)][month]) {
                number -= dayTable[IsLeapYear(year + 1)][month];
                month++;
            }
            day = number;
            printf("%04d-%02d-%02d\n", year + 1, month, day);
        }
    }
    return 0;
}