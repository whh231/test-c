#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	char ch;
	scanf("%c", &ch);
	if (ch >= 'a' && ch <= 'z')
		printf("%c", ch - 32);
	else if (ch >= 'A' && ch <= 'Z')
		printf("%c", ch + 32);
	else
		printf("%c", ch);
	return 0;
}




