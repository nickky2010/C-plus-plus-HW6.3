
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
	cout << "\t\tЗадача Иосифа Флавия\nУзнайте на каких местах нужно стоять чтобы выжить\n\n";
	cout << "Введите количество людей: ";
	init_check(people);
	cout << "Необходимо определить шаг убийства (убийство каждого 3 или 4 и т.д.)\nВведите шаг убийства: ";
	init_check(step);
	Josephus.Add(people);
	Josephus.Dead(step, people);
	cout << "\nМеста на которых нужно стоять чтобы выжить: ";
	Josephus.Print();
	quit();
	return 0;
}

void quit() {                          // функция выхода
	cout << "Завершение работы!\n";
	system("pause");
	exit(0);
}

void init_check(int &kol) {
	do {
		cin >> kol;
		if (kol < 1)
			cout << "\nОшибка! Число меньше 1!\n";
	} while (kol < 1);
}