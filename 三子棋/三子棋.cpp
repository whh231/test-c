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
	//初始化
	inin(board, ROW, COL);
	//打印空白棋盘
	Board(board, ROW, COL);
	char ret;
	while (1) {
		//玩家下棋
		player(board, ROW, COL);
		Board(board, ROW, COL);
		Sleep(300);
		// 判断输赢
		 ret=iswin(board, ROW, COL);
		if (ret != 'C')
			break;
		//电脑下棋
		comp(board, ROW, COL);
		Board(board, ROW, COL);
		Sleep(300);
		//判断输赢
		ret=iswin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	Sleep(300);
	if (ret == '#') {
		printf("电脑赢了\n");
		Board(board, ROW, COL);
	}
	Sleep(300);
	if (ret == '*') {
		printf("玩家赢了\n");
		Board(board, ROW, COL);
	}
	Sleep(300);
	if (ret == 'Q') {
		printf("平局\n");
		Board(board, ROW, COL);
	}
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

