#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	double a, b;

	scanf("%lf %lf", &a, &b);
	a = a + b / 60.0;
	double t;
	t = 4 * (a * a) / (a + 2) - 20;
		printf("%.2lf", t);
	return 0;
	
	
}




