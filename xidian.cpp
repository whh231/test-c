#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
int main() {
	char arr[] = "welcome to xidian university";
	char arr2[] = "############################";
	int left = 0;
	int right = strlen(arr) - 1;
	while (right >= left) {

		arr2[left] = arr[left];
		arr2[right] = arr[right];
		printf("%s\n", arr2);
		Sleep(300);
		system("cls");

		left++;
		right--;
	}
	printf("%s\n", arr2);

	return 0;
}




