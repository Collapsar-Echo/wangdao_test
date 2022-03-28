#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main() {
	string str;
	while (getline(cin, str)) {
		if ('a' < str[0] && str[0] < 'z')
			str[0] = str[0] + 'A' - 'a';
		for (int i = 1; i < str.size(); ++i) {
			if (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\n') {
				if ('a' < str[i+1] && str[i+1] < 'z')
					str[i+1] = str[i+1] + 'A' - 'a';
			}
		}
		cout << str << endl;
	}
	return 0;
}