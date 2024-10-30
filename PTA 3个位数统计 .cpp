#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	int k=0,N;
	scanf("%d",&N);
	int arr[1000];
	while (N > 0) {
		arr[k] = N % 10;
		k++;
		N /= 10;
	}
	int i;
	for (i = 0; i < 10; i++) {
		int num = 0;
		for (int h = 0; h < k; h++) {
			if (arr[h] == i) {

				num++;
			}
		}
		if (num >= 1) {
				printf("%d:%d\n", i, num);
				num = 0;
			}

	}


	return 0;

}
