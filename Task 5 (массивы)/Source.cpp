#define _CRT_SECURE_NO_DEPRECATE
#include<locale.h>
#include<stdio.h>
#include<cstdlib>
#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "ѕрограмма считает максимальное количество одинаковых элемнтов в массиве " << endl;
	while (1)
	{
		int l = 0;
		cout << "¬ыберите действие: 1 - запуск; 0 - выход." << endl;
		cin >> l;
		if (l != 1)
		{
			break;
		}
		system("cls");
		int k = 0, max = 0, v = 0;
		int size = 5;
		cout << "¬ведите размер массива: ";
		cin >> size;
		int* mas = new int[size];
		if (size >= 2)                          // проверка на размер массива 
		{
			srand(time(NULL));
			for (int i = 0; i < size; i++)
			{
				mas[i] = rand() % 100 - 50;      //заполнение массива
				printf("%d\t", mas[i]);
			}
		}
		else
		{
			cout << "размер массива должен быть больше" << endl;
			continue;
		}
		cout << endl;
		for (int i = 0; i < size; i++) // открытие цикла дл€ просмотра массива 
		{
			for (int p = 0; p < size; p++) // открытие второго цикла дл€ проврки каждого элемента на сходство с другими элементами 
			{
				if (mas[i] == mas[p]) v = v + 1;
			}
			if (max <= v) // проверка на максимальное кол-во совпадений 
			{
				max = v;
				v = 0;
			}
			else v = 0;
		}
		if (max == 1)
		{
			cout << "нет совпадений" << endl;
		}
		else
		{
			cout << "ќтвет: количество повтор€ющихс€ элементов " << max << endl;
		}
		delete[] mas;
	}
	return 0;
}