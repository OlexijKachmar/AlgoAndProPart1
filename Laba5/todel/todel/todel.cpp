// todel.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>



const int SIZE1 = 100;
const int SIZE2 = 100;


int rows;
int columns;

void transpMatrix(int** arr);
void main(int argc, char* argv[])
{
	
	printf("Enter number of rows and columns in your matrix:\t");
	scanf_s("%d", &columns);
	rows = columns;
	int **arr;
	//arr = new int*[rows];
	arr = (int**)malloc(sizeof(int*)*rows);//
	for (int i = 0; i < rows; i++)
	{
		//arr[i] = new int[columns];
		arr[i] = (int*)malloc(sizeof(int)*columns);//
	}

	
	for (int i = 0; i < rows; i++)
	{
		
		for (int j = 0; j < columns; j++)
		{
			scanf_s("%d", &arr[i][j]);
		}
		
	}
	
	printf("---------------------------\n");
	//int arr[SIZE1][SIZE2] = {};
	transpMatrix(arr);
	system("pause");

}

void transpMatrix(int** arr)
{
	int equalValues = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (arr[j][i] == arr[i][j])
			{
				equalValues++;
			}
			printf("%d\t", arr[j][i]);
		}
		printf("\n");
	}
	if (equalValues == pow(columns, 2))
	{
		printf("Matrix is simetric\n");
	}
}




// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
