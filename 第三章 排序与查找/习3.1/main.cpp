#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

const int MAXN = 1000;

int arr[MAXN + 10];

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i < n; ++i) {
			scanf("%d", &arr[i]);
		}
		sort(arr, arr + n);
		cout << arr[n - 1] << endl;
		if (n == 1) {
			printf("-1");
		}
		else {
			for (int i = 0; i < n - 1; ++i) {
				cout << arr[i] << ' ';
			}
		}
	}
	return 0;
}