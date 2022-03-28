#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<vector>
#include<string>

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

string Multiple(string str, int x) {                //字符串乘法
	int carry = 0;                                  //保存进位
	for (int i = str.size() - 1; i >= 0; --i) {
		int current = x * (str[i] - '0') + carry;
		str[i] = current % 10 + '0';
		carry = current / 10;
	}
	if (carry != 0) {                               //仍有进位
		str = to_string(carry) + str;
	}
	return str;
}

string Add(string str, int x) {                     //字符串加法
	int carry = x;
	for (int i = str.size() - 1; i >= 0; --i) {
		int current = (str[i] - '0') + carry;
		str[i] = current % 10 + '0';
		carry = current / 10;
	}
	if (carry != 0) {                               //仍有进位
		str = to_string(carry) + str;
	}
	return str;
}

vector<int> ConvertT2B(string str) {
	vector<int> B;
	if (str == "0") {
		B.push_back(0);
	}
	else {
		while (str.size() != 0) {
			int last = str[str.size() - 1] - '0';
			B.push_back(last % 2);
			str = Divide(str, 2);
		}
	}
	return B;
}
int main() {
	string str;
	while (cin >> str) {
		string answer = "0";
		for (int i = 0; i < ConvertT2B(str).size(); ++i) {
			answer = Multiple(answer, 2);           //字符串乘2
			answer = Add(answer, ConvertT2B(str)[i]);        //加数位值
		}
		cout << answer << endl;
	}
	return 0;
}
