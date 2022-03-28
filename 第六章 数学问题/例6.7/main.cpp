#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>

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
	while (cin >> n) {
		if (Judge(n)) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
	return 0;
}