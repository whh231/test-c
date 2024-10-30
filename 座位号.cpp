#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main() {
	int N;
	scanf("%d", &N);
	int* arr;
	arr = (int*)malloc(N * sizeof(int));
	char(* arr1)[17] = (char(*)[17])malloc(N * sizeof(char));
	int* arr2;
	arr2 = (int*)malloc(N * sizeof(int));
	for (int i = 0; i < N; i++) {
		int b,v;
		scanf("%s %d %d", &arr1[i],&b,&v);
		arr[i] = b;
		arr2[i] = v;
	}
	int M;
	scanf("%d", &M);
	for (int i = 0; i < M; i++) {
		int a;
		scanf("%d", &a);
		for (int j = 0; j < N; j++) {
			if (arr[j] == a)
				printf("%s %d\n", arr1[j], arr2[j]);
			break;
		}
	
	}




	return 0;
}
