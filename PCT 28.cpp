#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int vy(int n) {
	if (n == 1)
		return 0;
	int s = sqrt(n);
	if (s< 2)
		return 0;
	for (s; s >= 2; s--)
		if (n % s == 0) {

			return 0;
		}
			return 1;

}
int main() {
	int n;
	scanf("%d", &n);
	for (n; n > 0; n--) {
		int c;
		scanf("%d", &c);
		if (vy(c)==1)
			printf("YES\n");
		else
			printf("NO\n");




	}



	return 0;
}