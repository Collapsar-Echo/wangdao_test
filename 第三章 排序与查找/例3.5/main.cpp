#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>

using namespace std;

int arr[100];

int main() {
	int n, m;
	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}
		scanf("%d", &m);
		while (m--) {
			int num,i;
			scanf("%d", &num);
			for (i = 0; i < n; i++) {
				if (num == arr[i]) {
					printf("YES\n");
					break;
				}
			}
			if (i == n) {
				printf("NO\n");
			}
		}
	}
	return 0;
}