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
			printf("�������\n");
		else if (ans < ret)
			printf("����С��\n");
		else {
			printf("��ȷ\n");
			break;
		}
	}
}
int main() {
	int ch = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("��ѡ��:<");
		
		scanf("%d", &ch);
		switch (ch) {
		case 1:printf("��������:<");
			game();
			break;
		case 0:printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (ch);
	printf("���������˳�");
	return 0;
}




