#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>

using namespace std;

int GCD(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return GCD(b, a % b);
	}
}

int main() {
	int a, b;
	while (cin >> a >> b) {
		cout << GCD(a, b) << endl;
	}
	return 0;
}