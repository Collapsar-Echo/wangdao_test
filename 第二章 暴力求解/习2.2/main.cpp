#include<iostream>
#include<cstdio>

using namespace std;

int main() {
	int n,x,y,z;
	cin >> n;
	for (x = 0; x <= 100; x++)
		for (y = 0; y <= 100; y++)
			for (z = 0; z <= 100; z++)
				if ((x + y + z) == 100 && (15 * x + 9 * y + z ) <= 3*n)
					printf("x=%d,y=%d,z=%d\n", x, y, z);
	return 0;
}