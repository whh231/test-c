#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	char ch;
	ch = getchar();
	if (ch >= 'a' && ch <= 'z') {

		printf("小写字母");

	}
	else if(ch >= 'A' && ch <= 'Z'){
		printf("大写字母");

	}
	else if(ch >= '0' && ch <= '9') {
	
		printf("数字");
	}
	else {
		printf("其他");
	}





	return 0;



}