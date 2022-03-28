#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int arr[600];

int GCD(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return GCD(b, a % b);
	}
}

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) {
			break;
		}
		else {
			for (int i = 0; i < n; i++) {
				cin >> arr[i];
			}
			sort(arr, arr + n);
			int number = 0;
			for (int i = 0; i < n; i++) {
				for (int j = i + 1; j < n; j++) {
					if (GCD(arr[i], arr[j]) == 1) {
						number++;
					}
				}
			}
			cout << number << endl;
		}
	}
	return 0;
}
