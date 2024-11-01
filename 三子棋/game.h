#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#define ROW 3
#define COL 3
void inin(char arr[ROW][COL], int row, int col);
void Board(char arr[ROW][COL], int row, int col);
void player(char arr[ROW][COL], int row, int col);
void comp(char arr[ROW][COL], int row, int col);
char iswin(char arr[ROW][COL], int row, int col);
int isfull(char arr[ROW][COL], int row, int col);


