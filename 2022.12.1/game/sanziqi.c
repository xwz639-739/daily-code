#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
void menu()
{
	printf("**********************\n");
	printf("********1. play ******\n");
	printf("********0. exit ******\n");
	printf("**********************\n");
}
void game()
{
	char ret=0;
	char board[ROW][COL] = { 0 };
	IntiBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while(1)
	{
        PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		if (ret == '*')
		{
			printf("玩家赢\n");
		}
		if (ret == '#')
		{
			printf("电脑赢\n");
		}
		if(ret=='Q')
			printf("平局\n");
	}
	
		

	
}
void test()
{
	int ch = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf_s("%d", &ch);
		switch (ch)
		{
		case 1:
			game();
			break;
		case 0:
			printf("正在退出");
			Sleep(1000);
			system("cls");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
			}
	} while (ch);
 }
int main()
{
	test();
	return 0;
}