#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main() {
	string str;
	while (cin >> str) {
		int num = 0;
		for (int i = 0; i < str.size(); ++i) {
			num += (str[i]-'0') * (pow(2, (str.size() - i)) - 1);
		}
		cout << num << endl;
	}
	return 0;
}