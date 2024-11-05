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
	//初始化
	inboard( mine, ROWS, COLS, '0');
	inboard( show, ROWS, COLS, '*');
	//打印
	//Displayboard(mine, ROW, COL);
	Displayboard(show, ROW, COL);
	//生成雷
	houder(mine, ROW, COL);
	//排查
	paicha(mine,show, ROW, COL);

}
int main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入错误");
			break;
		}
	} while (input);

	return 0;
}