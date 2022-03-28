#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>

using namespace std;

int arr[80];

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		if (arr[0] != arr[1]) {
			printf("0 ");
		}
		for (int i = 1; i < n-1; i++) {
			if ((arr[i] < arr[i + 1] && arr[i] < arr[i - 1]) ||
				(arr[i] > arr[i + 1] && arr[i] > arr[i - 1])) {
				printf("%d ", i);
			}
		}
		if (arr[n - 1] != arr[n - 2]) {
			printf("%d", n-1);
		}
		printf("\n");
	}

	return 0;
}