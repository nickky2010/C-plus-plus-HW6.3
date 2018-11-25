
#include <iostream>
#include <windows.h>
#include "Josephus_Flavius.h"
using namespace std;
void quit();
void init_check(int &kol);

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int people, step;
	Josephus_Flavius Josephus;
	cout << "\t\t������ ������ ������\n������� �� ����� ������ ����� ������ ����� ������\n\n";
	cout << "������� ���������� �����: ";
	init_check(people);
	cout << "���������� ���������� ��� �������� (�������� ������� 3 ��� 4 � �.�.)\n������� ��� ��������: ";
	init_check(step);
	Josephus.Add(people);
	Josephus.Dead(step, people);
	cout << "\n����� �� ������� ����� ������ ����� ������: ";
	Josephus.Print();
	quit();
	return 0;
}

void quit() {                          // ������� ������
	cout << "���������� ������!\n";
	system("pause");
	exit(0);
}

void init_check(int &kol) {
	do {
		cin >> kol;
		if (kol < 1)
			cout << "\n������! ����� ������ 1!\n";
	} while (kol < 1);
}