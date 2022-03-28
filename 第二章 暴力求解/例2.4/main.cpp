#include<iostream>
#include<cstdio>

using namespace std;

int main() {
	int h;
	scanf("%d", &h);
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= h+2*(h-1); j++) {
			if (j <= h + 2 * (h - 1) - (h + 2 * (i-1)))
				printf(" ");
			else {
				printf("*");
			}
		}
		printf("\n");
	}

	return 0;
}