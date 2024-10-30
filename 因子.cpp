#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d", &n);
	int max_len = 0;
	int star = 0;
	for (int i = 2; i < sqrt(n)+1; i++) {
		int tmp = n;
		int j = i;
		int len = 0;
		while (tmp % j == 0) {
			tmp = tmp / j;
			j++;
			len++;
		}
		if (len > max_len) {
			max_len = len;
		    star = i;
		}
	}
	if (max_len == 0) {
		printf("нч");

	}
	else {
		printf("%d\n", max_len);
		for (int i = star; i < star + max_len-1; i++)
			printf("%d*", i);
	}
	printf("%d", star + max_len-1);

	return 0;
}


