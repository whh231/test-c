#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int y, m;
	printf("��������� ����\n");
	scanf(" %d %d", &y, &m);
	if (m == 2) {
		if (y % 4 == 0 && y % 100 != 0)
			printf("����Ϊ29");
		else
			printf("����Ϊ28");
	}

	else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		printf("����Ϊ31");
	else if (m >= 13)
		printf("����");
	else
		printf("����Ϊ30");

	return 0;
}
