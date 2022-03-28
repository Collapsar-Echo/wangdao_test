#include<iostream>
#include<cstdio>

using namespace std;

int main() {
	int n;
	while (scanf("%d", &n) != 0) {
		int number=0;
		while (n != 1) {
			if (n % 2 == 0) {
				n /= 2;
			}
			else {
				n = (3 * n + 1) / 2;
			}
			number++;
		}
		printf("%d\n", number);
	}
	return 0;
}