#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<string.h>
//int main(){
//	int n;
//     scanf("%d", &n);
//	int arr[100], arr2[100],arr4[100];
//	int num=0;
//	int i = 0;
//	for(int i=0;i<n;i++){
//		scanf("%d", &arr[i]);
//	}
//	for (int h = 0; h < n; h++) {
//		arr4[h] = arr[h];
//		num = 0;
//		while (arr[h] > 0) {
//			num += arr[h] % 10;
//			arr[h]=arr[h] / 10;
//		}
//		arr2[h] = num;
//	}
//		int arr3[100] ;
//	for(int o=0;o<n;o++){
//		arr3[o] = arr2[o];
//		if (arr3[0] < arr3[o ]) {
//			arr3[0] = arr3[o ];
//		}
//	}
//	int arr5[100];
//	memset(arr5, 0, sizeof(arr5));
//	for (int j = 0; j< n; j++) {
//		if (arr2[j] == arr3[0])
//			arr5[j] = arr4[j];
//	}
//	for (int p = 0; p < n; p++) {
//		if (arr5[0] < arr5[p ])
//			arr5[0] = arr5[p ];
//	}
//	printf("%d", arr5[0]);
//	return 0;
//}
int main() {
	int n;
	scanf("%d", &n);
	int numb;
	int maxnum = 0;
	int maxnumb = 0;
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &numb);
		int temp=numb;
		int num = 0;
		while ( temp > 0) {
			num += temp % 10;
			temp /= 10;
		}
		if (num > maxnum || (num == maxnum && numb > maxnumb) ){
			maxnum = num;
			maxnumb = numb;
		}
	}
	printf("%d", maxnumb);
	return 0;
}
