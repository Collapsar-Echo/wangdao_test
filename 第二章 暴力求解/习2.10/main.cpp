#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main() {
	int n;
	string str;
	while (scanf("%d", &n) != EOF) {
		if (n == 0) 
			break;
		while (n--) {
			scanf("%s", &str);
			for (int i = 0; i < str.size(); i++) {
				if (str[i] == '\\'){
					printf("\n");
					for(int j=0;j<=i/2;i++)
						printf("%d",' ');
				}
				else {
					printf("%c", str[i]);
				}
			}
		}
	}
	return 0;
}