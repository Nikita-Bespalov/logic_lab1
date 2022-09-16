#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <Windows.h>
int main(void)
{

	SetConsoleCP(1251);// Вывод символов на экран 
	SetConsoleOutputCP(1251); //Ввод символов в консоль 
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	int i;

	struct student
	{

		char famil[20];
		char name[20], facult[20];
		int Nomzach;
	}
	stud[4];


	for (i = 0; i < 4; i++)
	{
		printf("Введите фамилию студента:\n");
		scanf("%20s", stud[i].famil);

		printf("Введите имя студента:\n");
		scanf("%20s", stud[i].name);

		printf("Введите название факультета студента %s %s \n", stud[i].famil, stud[i].name);
		scanf("%20s", stud[i].facult);

		printf("Введите номер зачетной книжки студента %s %s\n", stud[i].famil, stud[i].name);
		scanf("%d", &stud[i].Nomzach);
	}
	char name[20];
	//Поиск
	printf("Введите имя студента для поиска:\n");
	scanf("%20s", name);
	for (int i = 0; i < 4; i++) {
		if (strcmp(name, stud[i].name) == 0) {
			printf("\n Имя: %s \n Фамилия: %s \n Факультет: %s \n Номер зачетной книжки: %d \n", stud[i].name, stud[i].famil, stud[i].facult, stud[i].Nomzach);
		}
	}

}
