#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main() {
	double a;
	scanf("%lf", &a);
	double b = a;
	double c;
	while (1) {
		c = 0.5 * (b + a / b);
		if (b - c < 1e-5)
			break;
		b = c;

	}
	printf("%.5lf", c);

	
	return 0;
}