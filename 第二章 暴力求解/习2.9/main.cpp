#include<iostream>
#include<cstdio>

using namespace std;

int main() {
	int p, t, g1, g2, g3, gj;
	while (scanf("%d %d %d %d %d %d", &p, &t, &g1, &g2, &g3, &gj) != EOF) {
		double g = 0.0;
		if (abs(g1 - g2) <= t) {
			g = (g1 + g2) / 2.0;
		}
		else if(abs(g3 - g1) <= t && abs(g3 - g2) <= t){
			g = max(max(g1, g2), g3);
		}
		else if (abs(g3 - g1) >= t && abs(g3 - g2) >= t) {
			g = gj;
		}
		else {
			g = min(abs(g1 - g3), abs(g2 - g3)) / 2.0;
		}
		printf("%.1f", g);
	}
	return 0;
}