#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int n;
	char c;
	int num = 0, last, k=0;
	scanf("%d %c", &n, &c);
	while (k <= n) {
		k += (2 * num +1)*2;
		if (num == 1)
			k = k - 1;
		num++;
	}
	num = num - 1;
	printf("%d\n", num);
	last = n - k+ (2 * num + 1) * 2;
	printf("%d\n", last);
	for (register int i = num; i > 0; i--) {
		for (register int j = 1; j <= num - i; j++)
			printf(" ");
		for (int h = 1; h <= 2 * i - 1; h++)
			printf("%c", c);

		printf("\n");
	}
	for (register int i = 2; i <= num; i++) {
		for(register int j=num-i;j>=1;j--)
			printf(" ");
		for(register int h=2*i-1;h>0;h--)
			printf("%c", c);

		printf("\n");


	}
	printf("%d",last);



	return 0;

}