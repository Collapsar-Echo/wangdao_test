#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>

using namespace std;

int main() {
	string str1, str2;
	while (cin >> str1 >> str2) {
		int number = 0;
		for(int i = 0; i < str1.size(); i++)
			for (int j = 0; j < str2.size(); j++) {
				number += (str1[i] - '0')* (str2[j] - '0');
			}
		printf("%d\n", number);
	}
	return 0;
}