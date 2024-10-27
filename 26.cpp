#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main() {
	char a = 'a';
	for (int i = 0; i < 26; i++)
		printf("%c ", a + i);
	printf("\n");
	char z = 'z';
	for (int j =0; j <26; j++)
		printf("%c ", z - j);
	return 0;
}