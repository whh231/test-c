#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
void inboard(char mine[ROWS][COLS], int row, int col, char a);
void Displayboard(char mine[ROWS][COLS], int row, int col);
void houder(char mine[ROWS][COLS], int row, int col );
void paicha(char mine[ROWS][COLS], char show[ROWS][COLS],int row, int col );