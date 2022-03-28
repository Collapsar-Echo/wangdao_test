#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<cstdio>

using namespace std;

const int MAXN = 100;

struct Maxtric {
	int row, col;
	int maxtric[MAXN][MAXN];
	Maxtric(int r, int c):row(r), col(c){}
};

Maxtric Multiply(Maxtric x, Maxtric y) {
	Maxtric answer(x.row, y.col);
	for (int i = 0; i < answer.row; ++i) {
		for (int j = 0; j < answer.col; ++j) {
			answer.maxtric[i][j] = 0;
			for (int k = 0; k < x.col; k++) {
				answer.maxtric[i][j] += x.maxtric[i][k] * y.maxtric[k][j];
			}
		}
	}
	return answer;
}

void InputMatric(Maxtric& x) {
	for (int i = 0; i < x.row; ++i) {
		for (int j = 0; j < x.col; ++j) {
			scanf("%d", &x.maxtric[i][j]);
		}
	}
}

void OutputMatrix(Maxtric x) {                   //¾ØÕóÊä³ö
	for (int i = 0; i < x.row; ++i) {
		for (int j = 0; j < x.col; ++j) {
			printf("%d ", x.maxtric[i][j]);
		}
		printf("\n");
	}
}


int main() {
	Maxtric x(2, 3);
	Maxtric y(3, 2);
	InputMatric(x);
	InputMatric(y);
	Maxtric answer = Multiply(x, y);
	OutputMatrix(answer);
	return 0;
}