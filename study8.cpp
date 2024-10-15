#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int a,b;
	int s;
	scanf("%d",&a);
	if (a < 1) {

		b = a;
		printf("%d", b);
	}
	else if (a >= 1 && a < 10) {

		b = 2 * a - 1;
		printf("%d", b);
	}
	else {
		b = 3 * a - 11;
		printf("%d", b);

	}



    
	return 0;
}




