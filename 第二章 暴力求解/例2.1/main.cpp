#include<iostream>
#include<cstdio>

using namespace std;

int main() {
	for (int a = 0; a < 10; ++a)
		for (int b = 0; b < 10; ++b)
			for (int c = 0; c < 10; ++c)
				if (100 * a + 10 * b + c + 100 * b + 11 * c == 532)
					printf("%d %d %d",a,b,c);
	return 0;
}