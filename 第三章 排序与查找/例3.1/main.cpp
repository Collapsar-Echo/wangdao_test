#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int arr[100];

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i < n; ++i) {
			scanf("%d", &arr[i]);
		}
		sort(arr, arr + n);
		for (int i = 0; i < n; ++i) {
			printf("%d ",arr[i]);
		}
		printf("\n");
	}
	return 0;
}