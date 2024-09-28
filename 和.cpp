#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	int a ,b, c;
	scanf("%d %d %d", &a, &b, &c);
	int sum;
	sum = a + b + c;
	double avg;
	avg = sum / 3.0;

	printf("%.2lf", avg);




	return 0;
}