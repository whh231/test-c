#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main() {
	int a, sum=0;
	scanf("%d",&a);
	while(a>0){
		sum += a % 10;
		a = a / 10;
	}
	printf("%d\n", sum);
	return 0;
}