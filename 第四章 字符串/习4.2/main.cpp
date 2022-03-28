#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<string>
#include<sstream>

using namespace std;

int main() {
	string s, a, b;
	while (getline(cin,s)){
		cin >> a >> b;
		stringstream stringStream(s);
		string str;
		while (stringStream >> str) {
			if (str == a) {
				cout << b << ' ';
			}
			else {
				cout << str<<' ';
			}
		}
		cout << endl;
	}
	return 0;
}
