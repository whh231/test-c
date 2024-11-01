#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void inin(char arr[ROW][COL], int row, int col) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			arr[i][j] = ' ';
		}
	}
}

void Board(char arr[][COL], int row, int col) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			printf(" %c ",arr[i][j]);
			if (j < COL - 1) {
				printf("|");
			}
		}
		printf("\n");
		if (i < ROW - 1) {
			for (int j = 0; j < COL; j++) {
				printf("---");
				if (j < COL - 1) {
					printf("|");
				}

			}
			printf("\n");

		}
	
	}
}
void player(char arr[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	printf("玩家走>\n");
	while (1) {
		printf("请输入坐标>");
		scanf("%d %d", &x, &y);
		if (x <= ROW && x >= 1 && y <= COL && y >= 1) {

			if (arr[x - 1][y - 1] == ' ') {
				arr[x - 1][y - 1] = '*';
				break;
			}
				
			else
				printf("error");
		}
		else
			printf("error");
	}

}
void comp(char arr[ROW][COL], int row, int col) {
	printf("电脑走>\n");
	while (1) {
		int x = rand() % 3;
		int y = rand() % 3;
		if (arr[x][y] == ' ') {
			arr[x ][y] = '#';
			break;

		}
	}
}
int isfull(char arr[ROW][COL], int row, int col) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			if (arr[i][j] == ' ')
				return 0;
		}

	}
	return 1;
}

char iswin(char arr[ROW][COL], int row, int col) {
	//玩家赢
	for (int i = 0; i < ROW; i++) {
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] == '*')
			return arr[i][1];
	}
	for (int j = 0; j < COL; j++) {
		if (arr[0][j] == arr[1][j] && arr[1][j] == arr[2][j] && arr[0][j] == '*')
			return arr[0][j];
	}
	if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] == '*')
		return arr[0][0];
	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] == '*')
		return arr[1][1];

	//电脑赢
	for (int i = 0; i < ROW; i++) {
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] == '#')
			return arr[i][1];
	}
	for (int j = 0; j < COL; j++) {
		if (arr[0][j] == arr[1][j] && arr[1][j] == arr[2][j] && arr[0][j] == '#')
			return arr[0][j];
	}
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] == '#')
		return arr[0][0];
	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] == '#')
		return arr[1][1];

	//平局
	int ret=isfull(arr, row, col);
	if (ret == 1)
		return'Q';

	return'C';
}
