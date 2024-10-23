#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	double n;
	scanf("%lf", &n);

	double a;
	if (n <= 3500)
		printf("%.0f", n);
	else {
		a = n - 3500;
		if (a <= 1500) {
			printf("%.0f", n - a * 0.03);
		}
		if (a > 1500 && a <= 4500)
			printf("%.0f", n - (45 + (a - 1500) * 0.1));
		if (a > 4500 && a <= 9000)
			printf("%.0f", n - (345 + (a - 4500) * 0.2));
		if (a > 9000 && a <= 35000)
			printf("%.0f", n - (1245 + (a - 9000) * 0.25));
		if (a > 35000)
			printf("%.0f", n - (7745+ (a - 35000) * 0.3));

	}
	return 0;
}
