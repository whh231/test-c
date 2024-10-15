#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int a, b, c, d,e;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (a >= b)
		e = a;
	else e = b;
	if (c >= e&& d <= c)
		e = c;
	else if (c <= e && e <= d)
		e = d;
	else if (c >= e && d >= c)
		e = d;
	printf("%d", e);







	return 0;

}
