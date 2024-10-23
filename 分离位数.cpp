#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int n;
	int arr[5] ;
	int i = 0;
	scanf("%d",&n);
	while (n > 0) {
		arr[i] = n % 10;
		i++;
		n = n / 10;
	}
	while (i >0) {
		printf("%d ", arr[i-1]);
		i--;

	}

	return 0;
}