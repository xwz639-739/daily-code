#pragma once

#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

void IntiBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL],int row, int col);
void PlayerMove(char board[ROW][COL],int row, int col);
void ComputerMove(char borad[ROW][COL], int row, int col);
char Iswin(char board[ROW][COL], int row,int col);