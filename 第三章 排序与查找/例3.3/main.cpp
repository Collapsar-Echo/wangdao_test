#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

struct Student {
	string name;
	int score;
	int index;
};

Student arr[100];

bool Compare0(Student x, Student y) {
	if (x.score == y.score) {
		return x.index < y.index;
	}
	else {
		return x.score > y.score;
	}
}

bool Compare1(Student x, Student y) {
	if (x.score == y.score) {
		return x.index < y.index;
	}
	else {
		return x.score < y.score;
	}
}
int main() {
	int n, m;
	while (scanf("%d", &n) != EOF) {
		scanf("%d", &m);
		for(int i=0;i<n;++i){
			cin >> arr[i].name >> arr[i].score;
			arr[i].index = i;
		}
		if (m == 0) {
			sort(arr, arr + n, Compare0);
		}
		if (m == 1) {
			sort(arr, arr + n, Compare1);
		}
		for (int i = 0; i < n; ++i) {
			cout << arr[i].name << " " << arr[i].score << endl;
		}
	}
	return 0;
}