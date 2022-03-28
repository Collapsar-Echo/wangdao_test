#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<queue>

using namespace std;

struct animal {
	int number;
	int order;
	animal(int n,int o):number(n), order(o){}
};

int main() {
	queue<animal> cats;
	queue<animal> dogs;
	int n;
	int order = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int method, type;
		cin >> method >> type;
		if (method == 1) {
			if (type < 0) {
				cats.push(animal(type, order++));
			}
			else if (type > 0) {
				dogs.push(animal(type, order++));
			}
		}
		else if (method == 2) {
			if (type == 0 && !dogs.empty() && !cats.empty()) {
				if (dogs.front().order < cats.front().order) {
					cout << cats.front().number << ' ';
					cats.pop();
				}
				else if (dogs.front().order > cats.front().order) {
					cout << dogs.front().number << ' ';
					dogs.pop();
				}
			}
			else if (type == 0 && !dogs.empty() && cats.empty()) {
				cout << dogs.front().number << ' ';
				dogs.pop();
			}
			else if (type == 0 && dogs.empty() && !cats.empty()) {
				cout << cats.front().number << ' ';
				cats.pop();
			}
			else if (type == 1 && !dogs.empty()) {
				cout << dogs.front().number << ' ';
				dogs.pop();
			}
			else if (type == -1 && !cats.empty()) {
				cout << cats.front().number << ' ';
				cats.pop();
			}
		}
	}
	cout << endl;
	return 0;
}