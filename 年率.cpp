#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	double a, b;
	scanf("%lf %lf", &a, &b);
	double p = 1+a;
	while (b > 1) {
		p *= (1 + a);

		b--;
	}
	printf("%.2lf", p);
	return 0;
}