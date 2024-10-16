#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
void menu() {
	printf("**************************\n");
	printf("**********menu************\n");
	printf("**********1.play**********\n");
	printf("**********0.exit**********\n");
	printf("**************************\n");

}
void game() {
	int ans;
	
	int ret = rand() % 100 + 1;
	while (1) {

		scanf("%d", &ans);
		if (ans > ret)
			printf("输入大了\n");
		else if (ans < ret)
			printf("输入小了\n");
		else {
			printf("正确\n");
			break;
		}
	}
}
int main() {
	int ch = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择:<");
		
		scanf("%d", &ch);
		switch (ch) {
		case 1:printf("输入数字:<");
			game();
			break;
		case 0:printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (ch);
	printf("结束，请退出");
	return 0;
}




