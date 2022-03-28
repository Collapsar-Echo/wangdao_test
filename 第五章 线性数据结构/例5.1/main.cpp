#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

vector<int> numberE;
vector<int> numberG;

int sum(int x) {
	int sum = 0;
	for (int i = 1; i < x; ++i) {
		if (x % i == 0) {
			sum += i;
		}
	}
	return sum;
}

int main() {
	for (int i = 2; i <= 60; ++i) {
		if (i == sum(i)) {
			numberE.push_back(i);
		}
		else if(i < sum(i)) {
			numberG.push_back(i);
		}
	}
	cout << "E:";
	for (int i = 0; i < numberE.size(); ++i) {
		cout << ' ' << numberE[i];
	}
	cout << endl;
	cout << "G:";
	for (int i = 0; i < numberG.size(); ++i) {
		cout << ' ' << numberG[i];
	}
	return 0;
}