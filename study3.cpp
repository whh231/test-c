#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	double a;
	double s;
	scanf("%lf", &a);
	if (a <= 110&&a>0) {
		s = a * 0.5;
		printf("%.2lf",s);


	}
	else if (a <= 210 && a > 110) {
		s = ((a - 110) * 0.55 + 110 * 0.5);
		printf("%.2lf",s);


	}
	else if (a > 210 && a <= 1000) {
		s = (a - 210) * 0.7 + 55 + 55;
		printf("%.2lf",s);
	}
		


	return 0;
}




