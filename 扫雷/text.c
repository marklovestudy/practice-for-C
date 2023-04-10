#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include "game.h"

void game()
{
	//���ú��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//�Ų���׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//��ʼ����
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//ɨ��
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
	//ѯ����Ϸ�Ƿ�ʼ��1��ʼ��0�˳�
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//��ʼ��Ϸ
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("��������������룺\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}