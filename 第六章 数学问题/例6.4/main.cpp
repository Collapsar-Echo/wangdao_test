#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

char IntToChar(int x) {                             //���ֱ���ַ�
    if (x < 10) {
        return x + '0';
    }
    else {
        return x - 10 + 'a';
    }
}

int CharToInt(char c) {                             //�ַ��������
    if (c >= '0' && c <= '9') {
        return c - '0';
    }
    else {
        return c - 'A' + 10;
    }
}

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    string str;
    cin >> str;
    long long number = 0;
    for (int i = 0; i < str.size(); ++i) {          //��m���Ʊ��ʮ����
        number *= m;
        number += CharToInt(str[i]);
    }
    vector<char> answer;
    if (number == 0) {
        answer.push_back('0');
    }
    else {
        while (number != 0) {                       //��ʮ���Ʊ��n����
            answer.push_back(IntToChar(number % n));
            number /= n;
        }
    }
    for (int i = answer.size() - 1; i >= 0; --i) {  //�������
        printf("%c", answer[i]);
    }
    printf("\n");
    return 0;
}