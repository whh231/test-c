#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int a, b,c;
	char ch;
	scanf("%d%c%d", &a, &ch, &b);
	switch(ch){
	case'+': c = a + b; break;
	case'-':  c = a - b; break;
	case'*': c = a * b; break;
	case'/': c = a / b; break;
	case'%':  c = a % b;break;
	}

	printf("%d%c%d=%d",a, ch, b, c);
	
}




