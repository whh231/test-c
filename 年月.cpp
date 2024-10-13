#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int y, m;
	printf("请输入年份 月数\n");
	scanf(" %d %d", &y, &m);
	if (m == 2) {
		if (y % 4 == 0 && y % 100 != 0)
			printf("天数为29");
		else
			printf("天数为28");
	}

	else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		printf("天数为31");
	else if (m >= 13)
		printf("错误");
	else
		printf("天数为30");

	return 0;
}
