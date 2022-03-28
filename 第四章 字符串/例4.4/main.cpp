#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int number[256];

int main() {
	string str1,str2;
	while (getline(cin, str1)) {
		if (str1 == "#") {
			break;
		}
		getline(cin, str2);
		memset(number, 0, sizeof(number));
		for (int j = 0; j < str2.size(); j++) {
				number[str2[j]]++;
		}
		for (int i = 0; i < str1.size(); i++) {
			cout << str1[i] <<' '<< number[str1[i]] << endl;
		}
	}
	return 0;
}