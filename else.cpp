#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	char ch;
	ch = getchar();
	if (ch >= 'a' && ch <= 'z') {

		printf("Сд��ĸ");

	}
	else if(ch >= 'A' && ch <= 'Z'){
		printf("��д��ĸ");

	}
	else if(ch >= '0' && ch <= '9') {
	
		printf("����");
	}
	else {
		printf("����");
	}





	return 0;



}