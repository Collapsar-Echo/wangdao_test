#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>

using namespace std;

int QuickPower(int x,int n) {
	int answer = 1;
	while (n != 0) {
		if (n % 2 == 1) {
			answer *= x;
			answer %= 1000; 
		}
		n /= 2;
		x *= x;
		x %= 1000;
	}
	return answer;
}

int main() {
	int x, n;
	cin >> x >> n;
	cout << QuickPower(x, n) << endl;
	return 0;
}