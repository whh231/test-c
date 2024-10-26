#include <stdio.h>

int main() {
	int n;
	int i = 0;
	scanf("%d", &n);
	int max = n % 10, min = n % 10;
	if (n == 0) {
		i++;
	}

	while (n > 0) {
		int tem = 0;
		n = n / 10;
		i++;
		if (n > 0) {
			tem = n % 10;
			if (tem > max) {
				max = tem;
			}
			if (tem < min) {
				min = tem;
			}
		}
	}
	printf("%d %d %d", i, max, min);


	return 0;
}