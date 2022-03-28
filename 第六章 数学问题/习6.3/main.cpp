#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

/* char Int2Char(int number) {
	if (number < 10) {
		return number + '0';
	}
	else {
		return number - 10 + 'a';
	}
}

void ConvertT2M(int add, int m) {
	vector<int> answer;
	if (add == 0) {
		answer.push_back(0);
	}
	else {
		while (add != 0) {
			answer.push_back(add % m);
			add /= m;
		}
	}
	for (int j = answer.size() - 1; j >= 0; --j) {
		cout << Int2Char(answer[j]);
	}
	cout << endl;
} */

int Char2Int(char c) {
	if (c >= 'A' && c <= 'Z') {
		return c - 'A' + 10;
	}
	else {
		return c - '0' + 0;
	}
}

void ConvertM2T(string str, int m) {
	int answer = 0;
	for (int i = 0; i < str.size(); i++) {
		answer += Char2Int(str[i]) * pow(m, str.size() - i - 1);
	}
	cout << answer << endl;
}

int main() {
	string str;
	while (cin >> str) {
		str = str.substr(2);
		ConvertM2T(str, 16);
	}

	return 0;
}