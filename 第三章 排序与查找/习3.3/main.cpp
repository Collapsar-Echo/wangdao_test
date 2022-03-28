#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

struct Student {
	int num;
	string hat;
};

Student arr[100];

bool Compare(Student x, Student y) {
	return x.num > y.num;
}

int main() {
	int n;
	while (cin >> n) {
		for (int i = 0; i < n; ++i) {
			cin >> arr[i].num >> arr[i].hat;
		}
		sort(arr, arr + n, Compare);
		for (int i = 0; i < n; ++i) {
			cout << arr[i].hat << endl;
		}
	}
	return 0;
}