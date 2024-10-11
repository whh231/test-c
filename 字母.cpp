#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	char ch[5];
	int i = 0;
	while (i < 5) {
		scanf("%c|", &ch[i]);
		ch[i] = ch[i] + 32;

		i++;

	}
	int o = 0;
		while (o < 5) {
			printf("%c", ch[o]);
			o++;

	}
		printf("!");



	return 0;
}