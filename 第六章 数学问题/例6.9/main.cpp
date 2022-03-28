#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>

using namespace std;

const int MAXN = 5e5;

bool isPrime[MAXN];
vector<int> prime;

void Initial() {
	fill(isPrime, isPrime + MAXN, true);
	isPrime[0] = false;
	isPrime[1] = false;
	for (int i = 2; i < MAXN; i++) {
		if (!isPrime[i]) {
			continue;
		}
		prime.push_back(i);

		if (i > MAXN / i) {
			continue;
		}
		for (int j = i * i; j < MAXN; j += i) {
			isPrime[j] = false;
		}
	}
}

int main() {
	int n;
	Initial();
	while (cin >> n) {
		int number = 0;
		for (int i = 0; i < prime.size() && prime[i] < n; i++) {
			while(n % prime[i] == 0) {
				number++;
				n /= prime[i];
			}
		}
		if (n > 1) {
			number++;
		}
		printf("%d\n", number);
	}
	return 0;
}
