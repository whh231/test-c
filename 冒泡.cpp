#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void bubu_sort(int arr[], int n) {
	if (n == 1) {
		return;
	}
	for (int i = 0; i < n-1; i++) {
		if (arr[i] > arr[i + 1]) {
			int tmp = arr[i + 1];
			arr[i + 1] = arr[i];
			arr[i] = tmp;
		}
	}
	bubu_sort(arr, n - 1);
}
int main() {
	int n;
	scanf("%d", &n);
	int*arr = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	bubu_sort(arr, n);
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
