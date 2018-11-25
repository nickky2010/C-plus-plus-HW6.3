#pragma once
struct Node
{
	int place;
	bool life;
	Node *Next;
};

class Josephus_Flavius
{
private:
	Node* Head;    // Адрес головного элемента списка
	Node* Tail;    // Адрес хвостового элемента списка
	int Count;     // Количество элементов списка
	int isLife;

public:
	Josephus_Flavius();  // Конструктор
	~Josephus_Flavius(); // Деструктор
	void Add(int people);
	void Del();          // Удаление элемента списка. Удаляется головной элемент
	void DelAll();       // Удаление всего списка
	int who_is_Life(int step);
	void Dead(int step, int people);
	void Print();        // Вывод содержимого списка. Вывод начинается с головного элемента
	int GetCount();      // Получение количества элементов, находящихся в списке
};
