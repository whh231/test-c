#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int i,j;
	for (i = 1; i < 10; i++) {

		for (j = 1; j < 10; j++) {
			if (j <=i)
				printf("%4d", j * i);
			else
				printf("%4");
			
		}
		printf("%\n");

	}




	return 0;
}