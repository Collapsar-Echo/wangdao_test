#define _CRT_SECURE_NO_WARNINGS 1  
#include<iostream>
#include<cstdio>

using namespace std;

const int MAXM = 10000 + 10;
const int MAXN = 1000000 + 10;

int nextTable[MAXM];
int pattern[MAXM];
int text[MAXN];

void GetNextTable(int m) {
	int j = 0;
	nextTable[j] = -1;
	int t = nextTable[j];
	while(j < m) {
		if (t == -1 || pattern[j] == pattern[t]) {
			j++;
			t++;
			nextTable[j] = t;
		}
		else {
			t = nextTable[t];
		}
	}
	return;
}

int KMP(int n, int m) {
	GetNextTable(m);
	int i = 0;
	int j = 0;
	while (i < n && j < m) {
		if (j == -1 || text[i] == pattern[j]) { //��ǰ�ַ�ƥ��ɹ�
			i++;
			j++;
		}
		else {
			j = nextTable[j];                   //��ǰ�ַ�ƥ��ʧ��
		}
	}
	if (j == m) {                               //ģʽ��ƥ��ɹ�
		return i - j + 1;
	}
	else {                                    //ģʽ��ƥ��ʧ��
		return -1;
	}
}

int KMP() {

}

int main() {
	int number;
	scanf("%d", &number);
	while (number--) {
		int n, m;
		cin >> n >> m;
		for (int i = 0; i < n; ++i) {
			scanf("%d", &text[i]);
		}
		for (int j = 0; j < m; ++j) {
			scanf("%d", &pattern[j]);
		}

	}
	return 0;
}