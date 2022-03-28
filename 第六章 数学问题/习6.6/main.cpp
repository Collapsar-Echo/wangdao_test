#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

const int MAXN = 1e5;

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
		for (int j = i * i; j < MAXN; j+=i) {
			isPrime[j] = false;
		}
	}
}

int main() {
	int n;
	while (cin >> n) {
		Initial();
		cout << prime[n - 1] << endl;
	}
	return 0;
}