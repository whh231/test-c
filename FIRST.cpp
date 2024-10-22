#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
	int n;
	scanf("%d", &n);
	int a = 1, b = 0, c = 0;
	if (n > 1000 && n < 2000) {
		for (a = 1; a < 10; a++)
		{
			for (b = 0; b < 10; b++) {

				for (c = 0; c < 10; c++)
				{
					if (a * 100 + b * 10 + c + c * 100 + b * 10 + a == n)
						printf("%d %d %d\n", a, b, c);

				}
			}
		}
	}
	 return 0;
}
