#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu() {
	printf("**************************\n");
	printf("**************************\n");
	printf("******    1.play       ***\n");
	printf("******    0.exit       ***\n");
	printf("**************************\n");
	printf("**************************\n");
}
void game() {
	char board[ROW][COL];
	//��ʼ��
	inin(board, ROW, COL);
	//��ӡ�հ�����
	Board(board, ROW, COL);
	char ret;
	while (1) {
		//�������
		player(board, ROW, COL);
		Board(board, ROW, COL);
		Sleep(300);
		// �ж���Ӯ
		 ret=iswin(board, ROW, COL);
		if (ret != 'C')
			break;
		//��������
		comp(board, ROW, COL);
		Board(board, ROW, COL);
		Sleep(300);
		//�ж���Ӯ
		ret=iswin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	Sleep(300);
	if (ret == '#') {
		printf("����Ӯ��\n");
		Board(board, ROW, COL);
	}
	Sleep(300);
	if (ret == '*') {
		printf("���Ӯ��\n");
		Board(board, ROW, COL);
	}
	Sleep(300);
	if (ret == 'Q') {
		printf("ƽ��\n");
		Board(board, ROW, COL);
	}
}

int main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("�������");
			break;
		}
	} while (input);



	return 0;
}

