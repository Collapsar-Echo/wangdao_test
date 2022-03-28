#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int arr[200];

int main() {
	int n,m;
	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}
		scanf("%d", &m);
		int num = -1;
		for (int i = 0; i < n; i++) {
			if (m == arr[i]) {
				num = i;
				break;
			}
		}
		printf("%d", num);
	}
	return 0;
}