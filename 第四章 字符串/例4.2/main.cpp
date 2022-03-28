#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main() {
	string str;
	while (getline(cin,str)) {
		for (int i = 0; i < str.size(); i++) {
			if ('A' <= str[i] && str[i] <= 'Z') {
				str[i] = (str[i] -'A' + 1 ) % 26 + 'A';
			}
			if ('a' <= str[i] && str[i] <= 'z') {
				str[i] = (str[i] - 'a' + 1 ) % 26 + 'a';
			}
		}
		cout << str << endl;
	}
	return 0;
}