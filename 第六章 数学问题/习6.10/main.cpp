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

Matrix Add(Matrix x, Matrix y) {
	Matrix answer(x.row, y.col);
	for (int i = 0; i < answer.row; ++i) {
		for (int j = 0; j < answer.col; ++j) {
			answer.matrix[i][j] = x.matrix[i][j] + y.matrix[i][j];
		}
	}
	return answer;
}

int Zero(Matrix x) {
	int number = 0;
	bool flag1=true, flag2 = true;
	for(int i = 0; i < x.row; ++i) {
		for (int j = 0; j < x.col; ++j) {
			if (x.matrix[i][j] != 0) {
				flag1 = false;
			}
		}
		if (flag1 == true) {
			number++;
		}
	}
	for (int i = 0; i < x.col; ++i) {
		for (int j = 0; j < x.row; ++j) {
			if(x.matrix[j][i] != 0) {
				flag2 = false;
			}
		}
		if (flag2 == true) {
			number++;
		}
	}
	return number;
}

void InputMatric(Matrix& x) {
	for (int i = 0; i < x.row; ++i) {
		for (int j = 0; j < x.col; ++j) {
			scanf("%d", &x.matrix[i][j]);
		}
	}
}

void OutputMatrix(Matrix x) {                   //¾ØÕóÊä³ö
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
		if (n == 0) {
			break;
		}
		Matrix x(n, k);
		Matrix y(n, k);
		InputMatric(x);
		InputMatric(y);
		cout << Zero(Add(x, y)) << endl;
	}
	return 0;
}