//
////8.	Структура "Покупець":
////-прізвище, ім'я, по батькові;
////- домашня адреса;
////-номер телефону;
////-номер кредитної картки.
////Знищити 3 елементи з початку файлу, додати 3 елементи в кінець файлу.
////3. 	Текст функцій для :
////•	формування файлу,
////•	друку файлу,
////•	додавання запису у файл,
////•	знищення запису з файлу
////•	пошуку структури для знищення.
//
//#include"pch.h"
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#pragma warning(disable:4996)
//
//const int AMOUNT_OF_STRUCT = 4;
//
//typedef struct customer
//{
//
//	char surname[20];
//	char name[20];
//	char pobatkovi[20];
//	char homeAdress[20];
//	char phoneNumber[20];
//	char creditNumber[20];
//
//};
//
//
//customer fillStruct()
//{
//	customer buyer;
//	printf("Surname:\t"); scanf("%s", &buyer.surname);
//	printf("Name:\t"); scanf("%s", &buyer.name);
//	printf("Pobatkovi:\t"); scanf("%s", &buyer.pobatkovi);
//	printf("Home Adress:\t"); scanf("%s", &buyer.homeAdress);
//	printf("Phone Number:\t"); scanf("%s", &buyer.phoneNumber);
//	printf("Number of credit card:\t"); scanf("%s", &buyer.creditNumber);
//	return buyer;
//}
//
//
//void writeStructToFile(customer structArray[AMOUNT_OF_STRUCT], int numberOfStructures)
//{
//	FILE *f;
//	f = fopen("f.txt", "w+b");
//	if (f == NULL)
//	{
//		printf("File wasn't opened correctly");
//		exit(1);
//	}
//	for (int i = 0; i < numberOfStructures; i++)
//	{
//		fwrite(&structArray[i], sizeof(customer), 1, f);
//	}
//	fclose(f);
//}
//
//void fileRead()
//{
//
//}
//void addElementsToBuffer(customer structureArray[AMOUNT_OF_STRUCT], customer structureArray1[AMOUNT_OF_STRUCT])
//{
//	int structureleft = 3; int j = 0;
//	for (int i = 0; i < AMOUNT_OF_STRUCT - 3; i++)
//	{
//		structureArray1[i] = structureArray[structureleft + i];
//	}
//
//	for (int i = AMOUNT_OF_STRUCT - 3; i < AMOUNT_OF_STRUCT; i++)
//	{
//		structureArray1[i] = structureArray[j];
//		j++;
//	}
//}
//
//
//void main()
//{
//
//	customer structureArray[AMOUNT_OF_STRUCT];
//	customer structureArray1[AMOUNT_OF_STRUCT];
//	for (int i = 0; i < AMOUNT_OF_STRUCT; i++)
//	{
//		printf("CUSTOMER:\n");
//		structureArray[i] = fillStruct();
//
//	}
//	writeStructToFile(structureArray, 4);
//	//вивід введених структур
//	/*for (int i = 0; i < AMOUNT_OF_STRUCT; i++)
//	{
//		printf("surname - %s\n", structureArray[i].surname);
//		printf("name - %s\n", structureArray[i].name);
//		printf("pobatkovi - %s\n", structureArray[i].pobatkovi);
//		printf("Home adress - %s\n", structureArray[i].homeAdress);
//		printf("Phone number - %s\n", structureArray[i].phoneNumber);
//		printf("Number of credit card - %s\n", structureArray[i].creditNumber);
//		printf("\n");
//	}*/
//
//	addElementsToBuffer(structureArray, structureArray1);
//	writeStructToFile(structureArray1, 4);
//	//вивід зміненого порядку структур
//	for (int i = 0; i < AMOUNT_OF_STRUCT; i++)
//	{
//		printf("surname - %s\n", structureArray1[i].surname);
//		printf("name - %s\n", structureArray1[i].name);
//		printf("pobatkovi - %s\n", structureArray1[i].pobatkovi);
//		printf("Home adress - %s\n", structureArray1[i].homeAdress);
//		printf("Phone number - %s\n", structureArray1[i].phoneNumber);
//		printf("Number of credit card - %s\n", structureArray1[i].creditNumber);
//		printf("\n");
//	}
//
//	
//
//}