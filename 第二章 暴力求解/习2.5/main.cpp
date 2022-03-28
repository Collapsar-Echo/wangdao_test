#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

char matrix[80][80];

int main() {
	string str;
	while (cin >> str) {
		int row = (str.size() + 2) / 3;
		int col = (str.size() + 2) - row * 2;
		memset(matrix, ' ', sizeof(matrix));
		int index = 0;
		for (int i = 0; i < row; ++i) {
			matrix[i][0] = str[index++];
		}
		for (int i = 1; i < col; ++i) {
			matrix[row-1][i] = str[index++];
		}
		for (int i = row - 2; i >= 0; --i) {
			matrix[i][col-1] = str[index++];
		}
		for (int i = 0; i < row; ++i) {
			for (int j = 0; j < col; ++j) {
				printf("%c", matrix[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}