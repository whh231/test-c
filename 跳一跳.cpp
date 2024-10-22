#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main() {
	int arr[1000];
	memset(arr, 0, 1000);
	int num=0;
	int h = 2;
	for (int i = 1; i; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == 0)
			break;
		if (arr[i] == 1) {

			num++;
			h = 2;
		}
		if (i == 1) {
			if (arr[i] == 2)
				num = num + 2;
		}
		if (i >= 2) {
			if (arr[i] == 2 && arr[i - 1] == 2) {
				h = h + 2;
				num += h;
			}
			if (arr[i] == 2 && arr[i - 1] != 2) {
				num = num + 2;
			}
		}
	}
	printf("%d", num);



	return 0;
}