#include<iostream>
#include<cstdio>

using namespace std;

char matrix[80][80];

int main() {
	int n=0;
	char center;
	char outside;
	while (scanf("%d %c %c", &n, &center, &outside) != EOF) {
		for (int i = 0; i <= n / 2; i++) {
			int j = n - i - 1;
			char current;
			if ((n / 2 - i) % 2 != 0)
				current = outside;
			else
				current = center;
			int k = n - 2 * i;
			for (int m = 0; m < k; ++m) {
				matrix[i][i + m] = current;
				matrix[j][j - m] = current;
				matrix[i + m][i] = current;
				matrix[j - m][j] = current;
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				printf("%c", matrix[i][j]);
			}
			printf("\n");
		}
	}

	return 0;
}