#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<cstdio>

using namespace std;

const int MAXN = 100;

struct Matrix {
	int row, col;
	int matrix[MAXN][MAXN];
	Matrix(int r, int c) :row(r), col(c) {}
};

Matrix Multiply(Matrix x, Matrix y) {
	Matrix answer(x.row, y.col);
	for (int i = 0; i < answer.row; ++i) {
		for (int j = 0; j < answer.col; ++j) {
			answer.matrix[i][j] = 0;
			for (int k = 0; k < x.col; k++) {
				answer.matrix[i][j] += x.matrix[i][k] * y.matrix[k][j];
			}
		}
	}
	return answer;
}

Matrix QuickPower(Matrix x, int k) {
	Matrix answer(x.row, x.col);
	for (int i = 0; i < answer.row; ++i) {      //初始化为单位矩阵
		for (int j = 0; j < answer.col; ++j) {
			if (i == j) {
				answer.matrix[i][j] = 1;
			}
			else {
				answer.matrix[i][j] = 0;
			}
		}
	}
	while (k != 0) {
		if (k % 2) {
			answer = Multiply(answer, x);
		}
		k /= 2;
		x = Multiply(x, x);
	}
	return answer;
}

void InputMatric(Matrix& x) {
	for (int i = 0; i < x.row; ++i) {
		for (int j = 0; j < x.col; ++j) {
			scanf("%d", &x.matrix[i][j]);
		}
	}
}

void OutputMatrix(Matrix x) {                   //矩阵输出
	for (int i = 0; i < x.row; ++i) {
		for (int j = 0; j < x.col; ++j) {
			printf("%d ", x.matrix[i][j]);
		}
		printf("\n");
	}
}



int main() {
	int n, k;
	while (cin >> n >> k) {
		Matrix x(n, n);
		InputMatric(x);
		Matrix answer = QuickPower(x, k);
		OutputMatrix(answer);
	}
	return 0;
}