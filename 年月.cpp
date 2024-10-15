#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int a,b;
	scanf("%d %d",&a,&b);
	if (a >= 1900 && a <= 2030 && b <= 12 && b >= 1) {
		if (a % 4 == 0 && a % 100 != 0||a%400==0) {
			if (b == 2)
				printf("29");
			else if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
				printf("31");
			else
				printf("30");
		}

		else
		{
			if (b == 2)
				printf("28");
			else if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
				printf("31");
			else
				printf("30");
		}
	}



	
	return 0;
}
