#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	char ch[5];
	int i = 0;
	int a = 0;
	
		scanf("%c %c %c %c %c", &ch[0],& ch[1],& ch[2],& ch[3],& ch[4]);
	int o = 0;
	while (o < 5) {
		if (ch[o] == 'a' || ch[o] == 'A') {
			a += 1;


		}
		o++;
	
		
		
	}
	printf("%d", a);

	return 0;
}