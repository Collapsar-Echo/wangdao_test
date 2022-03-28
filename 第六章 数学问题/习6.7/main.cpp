#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>

using namespace std;

int main() {
	int n;
	while (cin >> n) {
		while (n--) {
			int m;
			int number = 0;
			cin >> m;
			for (int i = 1; i*i <=m ; i++) {
				if (m % i == 0 && i*i < m) {
					number += 2;
				}
				else if (i * i == m) {
					number++;
				}
			}
		
			cout << number << endl;
		}
	}
	return 0; 
}
