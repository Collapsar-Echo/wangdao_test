#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int arr[10];

bool Compare(int x, int y) {
	if (x % 2 == 1 && y % 2 == 1) {
		return x > y;
	}
	else if (x % 2 == 0 && y % 2 == 0) {
		return x < y;
	}
	else if (x % 2 == 1 && y % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	while (cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >>
		arr[5] >> arr[6] >> arr[7] >> arr[8] >> arr[9]) {

		sort(arr, arr + 10, Compare);

		for (int i = 0; i < 10; ++i) {
			cout << arr[i] << ' ';
		}
		printf("\n");
	}
	return 0;
}