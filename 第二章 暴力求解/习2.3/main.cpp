#include<iostream>
#include<cstdio>

using namespace std;

bool func(int n, int x, int y, int z) {
	int price;
	for(int a=9;a>=1;a--)
		for(int b = 9; b >= 0; b--)
			if ((a * 10000 + x * 1000 + y * 100 + z * 10 + b) % n == 0) {			
				price = (a * 10000 + x * 1000 + y * 100 + z * 10 + b) / n;
				printf("%d %d %d", a, b, price);
				return true;
			}
	return false;
}

int main() {
	int n,x,y,z;
	while (scanf("%d", &n) != EOF) {
		scanf("%d %d %d", &x, &y, &z);
		if (!func(n, x, y, z))
			printf("0\n");
	}
	return 0;
}