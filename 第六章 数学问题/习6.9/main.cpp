#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>

using namespace std;

long long QuickPower(long long x, long long n,int k) {
	long long answer = 1;
	while (n != 0) {
		if (n % 2 == 1) {
			answer = answer * x % (k - 1);
		}
		n /= 2;
		x = x*x % (k - 1);
	}
	return answer;
}

void Root(long long x, long long y, int k) {
	long long res;
	res = QuickPower(x, y, k);
	printf("%d", res ? res : k - 1);
}

int main() {
	long long x, y;
	int k;
	while (cin >> x >> y >> k) {
		Root(x, y, k);
	}
	return 0;
}