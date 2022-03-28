#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<string>
#include <algorithm>

using namespace std;

int main() {
	string str;
	cin >> str;
	string array[100];
	for (int i = 0; i < str.size(); ++i) {
		array[i] = str.substr(i);
	}
	sort(array, array + str.size());
	for (int i = 0; i < str.size(); ++i) {
		cout << array[i] << endl;
	}
	
	return 0;
}