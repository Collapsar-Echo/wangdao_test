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
    int year, month, day;
    int number = 0;
    while (scanf("%d %d %d", &year, &month, &day)!=EOF){
        int i = Isleapyear(year);
        int number = 0;
        for (int j = 0; j < month; ++j) {
            number += dayTable[i][j];
        }
        number += day;
        printf("%d", number);
    }

    return 0;
}