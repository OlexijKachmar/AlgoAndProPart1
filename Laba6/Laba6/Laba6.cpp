// Laba6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include<string.h>

int getMaxnumber(int *numbers, int j);

int main()
{
	int length;
	char strArr[100] = {};
	printf("Enter a lenght of string\n");
	scanf_s("%d", &length);
	printf("Enter a string\n");
	for (int i = 0; i < length; i++)
	{
		scanf_s("%c", &strArr[i]);
	}
	int numbers[100] = {};
	int amountOfDigitalsInString = 0;

	for (int i = 0; i < strlen(strArr); i++)
	{
		if (isdigit(strArr[i]))
		{
			numbers[amountOfDigitalsInString] = strArr[i];
			++amountOfDigitalsInString;

		}
	}

	for (int i = 0; i < strlen(strArr); i++)
	{
		if (isdigit(strArr[i]))
		{
			int maximum = getMaxnumber(numbers, amountOfDigitalsInString);
			strArr[i] = maximum;
			printf("%c", strArr[i]);
		}
		else
		{
			printf("%c", strArr[i]);
		}
	}

}
int getMaxnumber(int *numbers, int amountOfDigitalsInString)
{
	int max = numbers[0];
		for (int k = 0; k < amountOfDigitalsInString; ++k)
		{
			if (numbers[k] > max)
			{
				max = numbers[k];
			}
		}
		for (int p = 0; p < amountOfDigitalsInString; p++)
		{
			if (numbers[p] == max)
			{
				for (int t = p; t < amountOfDigitalsInString; t++)
				{
					numbers[t] = numbers[t + 1];

				}
				break;
			}
		}

		return max;
	}





//має виконуватись j разів поки всі члени масиву не = 0



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
