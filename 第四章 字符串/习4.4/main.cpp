#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

string Add(string str1, string str2) {
	string f1 = str1.substr(str1.find('.') + 1);
	string f2 = str2.substr(str2.find('.') + 1);
	if (f1.size() < f2.size()) {
		f1 = f1 + string(f2.size() - f1.size(), '0');
	}
	else {
		f2 = f2 + string(f1.size() - f2.size(), '0');
	}

	string i1 = str1.substr(0, str1.find('.'));
	string i2 = str2.substr(0, str2.find('.'));
	if (i1.size() < i2.size()) {
		i1 = string(i2.size() - i1.size(), '0') + i1;
	}
	else {
		i2 = string(i1.size() - i2.size(), '0') + i2;
	}

	int carry = 0;
	string f(f1.size(), ' ');
	for (int i = f.size() - 1; i >= 0; i--) {
		int courut = (f1[i] - '0') + (f2[i] - '0') + carry;
		f[i] = courut % 10 + '0';
		carry = courut / 10;
	}

	string it(i1.size(), ' ');
	for (int i = it.size() - 1; i >= 0; i--) {
		int courut = (i1[i] - '0') + (i2[i] - '0') + carry;
		it[i] = courut % 10 + '0';
		carry = courut / 10;
	}
	if (carry != 0) {
		it = to_string(carry) + it;
	}
	return it + '.' + f;
}

int main() {
	string str1, str2;
	while (cin >> str1 >> str2) {
		cout << Add(str1, str2) << endl;
	}
	return 0;
}