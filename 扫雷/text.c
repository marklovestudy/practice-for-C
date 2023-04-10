#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include "game.h"

void game()
{
	//布置好雷的信息
	char mine[ROWS][COLS] = { 0 };
	//排查出雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//开始布雷
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//扫雷
	FineMine(mine,show, ROW, COL);
}

void menu()
{
	printf("********************************\n");
	printf("****1 play 0 exit***************\n");
	printf("********************************\n");
}

void test()
{
	//询问游戏是否开始，1开始，0退出
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//开始游戏
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，重新输入：\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}