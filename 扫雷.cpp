#define _CRT_SECURE_NO_WARNINGS 1
#include"saol.h"
void menu() {
	printf("**************************\n");
	printf("**************************\n");
	printf("******    1.play       ***\n");
	printf("******    0.exit       ***\n");
	printf("**************************\n");
	printf("**************************\n");
}
void game() {
	char mine[ROWS][COLS] = { '0'};
	char show[ROWS][COLS] = {'0'};
	//��ʼ��
	inboard( mine, ROWS, COLS, '0');
	inboard( show, ROWS, COLS, '*');
	//��ӡ
	//Displayboard(mine, ROW, COL);
	Displayboard(show, ROW, COL);
	//������
	houder(mine, ROW, COL);
	//�Ų�
	paicha(mine,show, ROW, COL);

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