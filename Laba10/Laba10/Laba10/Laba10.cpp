// Laba10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//8.	Сформувати двовимірний масив. Додати в нього рядок із заданим номером;
#include "pch.h"
#include <iostream>

int ** make_matr(int columns, int rows);
int **InsertRow(int** arr, int columns, int rows, int positionToPush);

int main()
{
	int m, n, position;
	printf("number of columns\n");
	scanf_s("%d", &n);
	printf("number of rows\n");
	scanf_s("%d", &m);
	int **matr = make_matr(n, m);

	for (int i = 0;i < m;i++)
	{
		for (int j = 0;j < n;j++)
		{
			printf("%d\t", matr[i][j]);
		}
		printf("\n");
	}

	printf("\nEnter where to push row\n");
	scanf_s("%d", &position);
	matr = InsertRow(matr, n, m, position);

	for (int i = 0;i < m + 1;i++)
	{
		for (int j = 0;j < n;j++)
		{
			printf("%d\t", matr[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < m; i++)
	{
		free(matr[i]);
	}
	free(matr);
}

int ** make_matr(int columns, int rows)
{
	int **matr;
	int i, j;
	matr = /*new int*[rows]*/(int**)malloc(rows * sizeof(int*));
	for (i = 0;i < rows;i++)
	{
		matr[i] = /*new int[columns];*/(int*)malloc(columns * sizeof(int));
		for (j = 0;j < columns;j++)
		{
			matr[i][j] = 1;
		}
	}
	return matr;
}

int **InsertRow(int** arr, int columns, int rows, int positionToPush)
{
	int **tmparr;
	if ((positionToPush > rows) || (arr == NULL))
	{
		printf("fail");
		exit(1);
	}

	arr = (int**)realloc((void**)arr, (rows + 1) * sizeof(int));
	if (positionToPush < rows)
	{
		memcpy(arr+positionToPush+1 , arr+positionToPush, (rows - positionToPush) * sizeof(int));
	}
	
	arr[positionToPush] = (int*)malloc(sizeof(int)*columns);
	for (int j = 0;j < columns;j++)
	{
		arr[positionToPush][j] = 2;
	}

	return arr;
}



