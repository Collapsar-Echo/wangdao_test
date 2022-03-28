#include<iostream>
#include<cstdio>

using namespace std;

const int MAX = 10001;

int tree[MAX];

int main() {
	int l, m;
	while (scanf("%d %d", &l, &m) != EOF) {
		for (int i = 0; i <= l; ++i) {
			tree[i] = 1;
		}
		int r, j;
		while (m--) {
			scanf("%d %d", &j, &r);
			for (int i = j; i <= r; ++i) {
				tree[i] = 0;
			}
		}
		int number=0;
		for (int i = 0; i <= l; ++i) {
			number += tree[i];
		}
		printf("%d", number);
	}

	return 0;
}