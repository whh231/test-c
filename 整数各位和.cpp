#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main() {
	int a, b, c, d, f;
	scanf("%d",&a);
	b = a / 100;
	c = a % 100;
	d = c / 10;
	f = c % 10;
	int sum = b + d + f;
	printf("%d", sum);



	return 0;
}