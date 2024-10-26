#include <stdio.h>

int main () {
	int a, b = 0;
	scanf("%d", &a);
	while (1) {
		if (a == 1) {
			break;
		} else if (a % 2 == 0) {
			a = a / 2;
		} else {
			a = a * 3 + 1;
		}
		b++;

	}
	printf("%d", b);


	return 0;
}