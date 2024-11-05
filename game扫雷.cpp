#define _CRT_SECURE_NO_WARNINGS 1
#include"saol.h"
 int cichu=0;
void inboard(char mine[ROWS][COLS], int row, int col, char a) {
	for (int i = 0; i < row; i++) {

		for (int j = 0; j < col; j++) {
			mine[i][j] = a;
		}
	}
}
void Displayboard(char mine[ROWS][COLS], int row, int col) {
	printf("---------É¨À×ÓÎÏ·------------\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <=row; i++) {
		printf("%d ", i);
		for (int j = 1; j <=col; j++) {
			printf("%c ", mine[i][j]);

		}
		printf("\n");
	}
	printf("---------É¨À×ÓÎÏ·------------\n");

}
void houder(char mine[ROWS][COLS], int row, int col) {
	
	int count = 10;
	while (count) {
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0') {
			mine[x][y] = '1';
			count--;
		}
	}
}
int chalei(char mine[ROWS][COLS], int x, int y) {
	return mine[x + 1][y + 1] +
		mine[x - 1][y + 1] +
		mine[x + 1][y - 1] +
		mine[x - 1][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y] +
		mine[x - 1][y] +
		mine[x][y - 1] - 8 * '0';
}
void pai(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y) {
	if (x >= 1 && x <=ROW && y >=1 && y <=COL && show[x][y] == '*' && mine[x][y] == '0') {
		int count = chalei(mine, x, y);
		show[x][y] = count + '0';
		if (count == 0) {
			pai(mine, show, x + 1, y + 1);
			pai(mine, show, x - 1, y + 1);
			pai(mine, show, x, y + 1);
			pai(mine, show, x + 1, y);
			pai(mine, show, x + 1, y - 1);
			pai(mine, show, x + 1, y + 1);
			pai(mine, show, x, y - 1);
			pai(mine, show, x - 1, y);
		}
		else;
	}
	
}
void paicha(char mine[ROWS][COLS], char show[ROWS][COLS],int row, int col) {
	int win = 0;
	while (win < row * col - 10) {
		printf("ÇëÊäÈë×ø±ê>");
		int x, y;
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (mine[x][y] == '1') {
				printf("À×Õ¨ÁË");
				Displayboard(mine, row, col);
				break;
			}
			else {
				pai(mine, show, x, y);
				Displayboard(show, row, col);
				win++;
			}
		}
		else {
			printf("ÊäÈë´íÎó");
		}

	}


	if (cichu == row * col - 10) {
		printf("¹§Ï²£¬ÅÅÍê");
		Displayboard(mine, row, col);
	}
}


