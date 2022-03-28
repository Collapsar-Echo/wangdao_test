#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<stack>

using namespace std;

int main() {
	stack<int> number;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int m;
		scanf("%d", &m);
		number.push(m);
	}
	 while(!number.empty()){
		 printf("%d ", number.top());
		 number.pop();
	}
	return 0;
}