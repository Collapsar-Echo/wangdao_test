#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

string Divide(string str, int x) {
	int r = 0;
	for (int i = 0; i < str.size(); i++) {
		int current = r * 10 + str[i] - '0';
		str[i] = current / x + '0';
		r = current % x;
	}
	int position = 0;
	while (str[position] == '0') {            
		position++;
	}
	return str.substr(position);
}

void Convert(string str) {
	vector<int> answer;
	if (str == "0") {
		answer.push_back(0);
	}
	else {
		while (str.size() != 0) {
			int last = str[str.size() - 1] - '0';
			answer.push_back(last % 2);
			str = Divide(str, 2);
		}
	}
	for (int i = answer.size() - 1; i >= 0; --i) {
		printf("%d", answer[i]);
	}
	printf("\n");
}

int main() {
	string str;
	while (cin >> str) {
		Convert(str);
	}
	return 0;
}
