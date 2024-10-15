#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int a,b;
	int s;
	scanf("%d %d",&a,& b);
	if (a>=b) {
		s = b*b ;
		a = a % 10;
		printf("%d %d\n",a,s);
	}
	else {
		s = a * a;
		b= b % 10;
		printf("%d %d\n", b, s);
	}
	return 0;
}




