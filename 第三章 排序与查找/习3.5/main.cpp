#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct Number {
	int x;
	int y;
};

Number arr[1000];

bool Compare(Number a, Number b) {
	if (a.x == b.x) {
		return a.y < b.y;
	}
	else {
		return a.x < b.x;
	}
}

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i < n; i++) {
			cin >> arr[i].x >> arr[i].y;
		}
		sort(arr, arr + n, Compare);
		//cout << arr[0].x << ' ' << arr[0].y << endl;
		printf("%d %d\n", arr[0].x, arr[0].y);
	}
	return 0;
}