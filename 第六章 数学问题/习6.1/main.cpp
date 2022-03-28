#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

void Convert(int number) {
	vector<int> answer;
	int i = 0;
	while (number != 0) {
		answer.push_back(number % 8);
		number /= 8;
	}
	for (int j = answer.size() - 1; j >= 0; --j) {
		cout << answer[j] ;
	}
	cout << endl;
}

int main() {
	int number;
	while (cin >> number) {
		Convert(number);
	}

	return 0;
}