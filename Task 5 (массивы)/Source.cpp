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
	cout << "��������� ������� ������������ ���������� ���������� �������� � ������� " << endl;
	while (1)
	{
		int l = 0;
		cout << "�������� ��������: 1 - ������; 0 - �����." << endl;
		cin >> l;
		if (l != 1)
		{
			break;
		}
		system("cls");
		int k = 0, max = 0, v = 0;
		int size = 5;
		cout << "������� ������ �������: ";
		cin >> size;
		int* mas = new int[size];
		if (size >= 2)                          // �������� �� ������ ������� 
		{
			srand(time(NULL));
			for (int i = 0; i < size; i++)
			{
				mas[i] = rand() % 100 - 50;      //���������� �������
				printf("%d\t", mas[i]);
			}
		}
		else
		{
			cout << "������ ������� ������ ���� ������" << endl;
			continue;
		}
		cout << endl;
		for (int i = 0; i < size; i++) // �������� ����� ��� ��������� ������� 
		{
			for (int p = 0; p < size; p++) // �������� ������� ����� ��� ������� ������� �������� �� �������� � ������� ���������� 
			{
				if (mas[i] == mas[p]) v = v + 1;
			}
			if (max <= v) // �������� �� ������������ ���-�� ���������� 
			{
				max = v;
				v = 0;
			}
			else v = 0;
		}
		if (max == 1)
		{
			cout << "��� ����������" << endl;
		}
		else
		{
			cout << "�����: ���������� ������������� ��������� " << max << endl;
		}
		delete[] mas;
	}
	return 0;
}