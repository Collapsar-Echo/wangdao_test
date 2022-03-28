#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

char Int2Char(int number) {
	if (number < 10) {
		return number + '0';
	}
	else {
		return number - 10 + 'a';
	}
}

void ConvertT2M(long long add,int m) {
	vector<int> answer;
	if (add == 0) {
		answer.push_back(0);
	}
	else {
		while (add != 0) {
			answer.push_back(add % m);
			add /= m;
		}
	}
	for (int j = answer.size() - 1; j >= 0; --j) {
		cout << Int2Char(answer[j]);
	}
	cout << endl;
}

int main() {
	int m;
	long long a, b;
	while (cin >> m) {
		if (m == 0) {
			break;
		}
		else {
			cin >> a >> b;
			ConvertT2M(a + b, m);
		}
	}

	return 0;
}