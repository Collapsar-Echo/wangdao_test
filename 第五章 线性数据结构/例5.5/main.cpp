#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<stack>

using namespace std;

int main() {
	string str;
	while (cin >> str) {
		stack<char> b;
		string answer(str.size(), ' ');
		for (int i = 0; i < str.size(); ++i) {
			if (str[i] == '(') {
				b.push(i);
			}
			else if (str[i] == ')') {
				if (!b.empty()) {
					b.pop();
				}
				else {
					answer[i] = '?';
				}
			}
		}
		while (!b.empty()) {
			answer[b.top()] = '$';
			b.pop();
		}
		cout << str << endl;
		cout << answer << endl;
	}
	return 0;
}