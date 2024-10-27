#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int count=0;
void move(int n, char A, char B);
void hanoi(int n,char A,char B,char C) {
	count++;
	if (n == 1)
		move(n,A, C);
	else {
		hanoi(n - 1, A, C,B);
		move(n,A,C);
		hanoi(n - 1, B, A, C);
	}
}
void move(int n, char A, char B) {

	printf("�ѵ�%d�����Ӵ�%c�ƶ���%c\n",n, A, B);
}
int main() {
	int n;
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	printf("%d", count);
	return 0;

}