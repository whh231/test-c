#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	int n;
	double a=0, b;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			a += i / (2 * i - 1.0);
		}
		if (i % 2 == 0) {
			a -= i / (2 * i - 1.0);
		}



	}
	printf("%.3f", a);
	return 0;
}