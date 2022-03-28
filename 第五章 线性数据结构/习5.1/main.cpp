#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<stack>

using namespace std;

int main() {
	stack<int> number;
	int n;
	while (cin >> n) {
		while (n--) {
			char c;
			int m;
			cin >> c;
			if (c == 'A') {
				if (!number.empty()) {
					cout << number.top() << endl;
				}
				else {
					cout << 'E' << endl;
				}
			}
			else if (c == 'P') {
				cin >> m;
				number.push(m);
			}
			else if (c == 'O') {
				if (!number.empty()) {
					number.pop();
				}
			}
		}
	}
	return 0;
}