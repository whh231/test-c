#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);

	int i = 1;
	int h = 1, sum = 0, p = 1;

	//for (i = 1; i < (n + 1); i++)
	//{
	//	do
	//	{
	//		p *= h;
	//		h++;
	//		 
	//	} while (h < (i+1));
	//	sum += p;


	//}
	for (i = 1; i <= n; i++) {
		h *= i;
		sum += h;



	}
	printf("%d", sum);
	return 0;
}
