// todel.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void deleteElements(int*, int);
void addZero(int*);

int length;
int amountElementsToDelete = 0;
	
void main(int argc, _TCHAR* argv[])
{ 
	const int SIZE = 100;
	int array[SIZE]= {};
	printf("Enter length of array:\t");
	scanf_s("%d",&length);

	int elementToDelete;
	printf("Enter element to delete\t");
	scanf_s("%d",&elementToDelete);
	
	for(int i = 0; i<length;i++)
	{
		array[i] = rand();
	}

	array[2] = elementToDelete;
	array[1] = elementToDelete;
	for(int i = 0; i<length;i++)
	{
		printf("%d\n",array[i]);
		if(array[i] == elementToDelete)
		{
			amountElementsToDelete++;
		}
	}

	printf("----------------\n");
	
	deleteElements(array, elementToDelete);
	
	
	for(int k = 0; k < length - amountElementsToDelete; k++)
	{
		printf("%d\n",array[k]);
	}

	printf("----------------\n");

	addZero(array);
	system("pause");
}

void deleteElements(int* array, int elementToDelete)
{
	for(int j = 0; j<length; j++)
	{
		if(array[j] == elementToDelete)
		{ 
			for(int i = j; i<length; i++)
			{
				array[i] = array[i+1];
			}
			j--;
		}
    }
}

void addZero(int* array)
{ //розкоментувати при вкл
	/*array[1] = 0;

	for(int k = 0; k < length - amountElementsToDelete; k++)
	{
		printf("%d\n",array[k]);
	}*/

	int lengthAfterDelete = length - amountElementsToDelete;//к-сть елементів після видалення заданих
	int amountEvenElements = 0;
	for(int i = 0; i < lengthAfterDelete; i++)
	{
		if (i % 2 == 0)
		{
			amountEvenElements++;//к-сть парних елементів після видалення
		}
	}
	
	int k = 0;
	printf("===============================\n");
	do
	{
		for(int i = (lengthAfterDelete - 1) + amountEvenElements; i>=k; i--)
		{	
			array[i+1] = array[i];
			if(i == k)
			{   
				array[i] = 0;
				printf("%d\n",array[i]);
			   
				for (int j = k; j < k + 2; j++)
				{
					if(array[j+1] == 0 && j == (lengthAfterDelete - 1) + amountEvenElements)
					{
						break;
					}
					printf("%d\n",array[j+1]);
					 
				}
				k += 3;//змінна,яка вказує де треба поставити 0
			}
		}
	} while(k <= (lengthAfterDelete - 1) + amountEvenElements);
}