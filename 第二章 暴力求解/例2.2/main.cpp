#include<iostream>
#include<cstdio>

using namespace std;

int reverse(int number) {
	int reversenumber=0;
	while (number!=0) {
		reversenumber *= 10;
		reversenumber += number % 10;
		number /= 10;
	}
	return reversenumber;
}

int main() {
	int number=1000;
	while(number < 10000){
		if (9 * number == reverse(number))
			printf("%d\n", number);
		number++;
	}
	return 0;
}