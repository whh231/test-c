#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int i,j;
	scanf("%d %d", &i, & j);
	int m = i, n = j;
	int t = 0;
	while (t = i % j) {
		i = j;
		j = t;

	}
	printf("���Լ����%d\n", j);
	int h = m * n / j;
	printf("��󹫱�����%d\n",h);





	return 0;
}