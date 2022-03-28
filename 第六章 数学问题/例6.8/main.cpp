#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

bool Judge(int n) {
	if (n < 2) {
		return false;
	}
	else {
		int q = sqrt(n);
		for (int i = 2; i <= q; i++) {
			if (n % i == 0) {
				return false;
			}
		}
		return true;
	}
}

int main() {
	int n;
	vector<int> number;

	while (cin >> n) {
		for (int i = 2; i < n; i++) {
			if (i % 10 == 1 && Judge(i)) {
				number.push_back(i);
			}
		}
		for (int i = 0; i < number.size() - 1; i++) {
			cout << number[i] << ' ';
		}
		cout << number[number.size() - 1] << endl;
	}
	return 0;
}