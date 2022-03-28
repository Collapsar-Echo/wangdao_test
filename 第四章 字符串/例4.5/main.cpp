#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int number[26];

int main() {
	string str;
	while (getline(cin, str)) {
		memset(number, 0, sizeof(number));
		for (int j = 0; j < str.size(); j++) {
			if ('A' <= str[j] && 'Z' >= str[j]) {
				number[str[j]-'A']++;
			}
			
		}
		for (int i = 0; i < 26; i++) {
			printf("%c:%d\n", 'A' + i, number[i]);
		}
	}
	return 0;
}