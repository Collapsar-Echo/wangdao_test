#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

void Convert(int number) {
	vector<int> answer;
	while (number != 0) {
		answer.push_back(number % 2);
		number /= 2;
	}
	for (int i = answer.size()-1; i >= 0; --i) {
		printf("%d", answer[i]);
	}
	printf("\n");
}

int main() {
	int number;
	while (cin >> number) {
		Convert(number);
	}
	return 0;
}