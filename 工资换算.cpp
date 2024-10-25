#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int a = n / 100;
	n %= 100;
	int b = n /50;
	n %= 50;
	int c = n / 20;
	n %= 20;
	int d = n / 10;
	n %= 10;
	int e = n / 5;
	n %= 5;
	printf("%d %d %d %d %d %d", a, b, c, d, e, n);
	

	return 0;
}