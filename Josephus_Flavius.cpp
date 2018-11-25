#include "Josephus_Flavius.h"
#include <iostream>
using namespace std;

Josephus_Flavius::Josephus_Flavius()
{
	Head = Tail = NULL;             // ���������� ������ ����
	Count = 0;
}

Josephus_Flavius::~Josephus_Flavius()
{
	DelAll();
}

void Josephus_Flavius::Add(int people)
{
	Node* tmp;
	Node* n;
	Count = people;
	isLife = Count;
	Head = new Node;
	Head->life = true;
	Head->place = 1;
	Head->Next = 0;
	tmp = Head;
	for (int i = 2; i <= people; i++)
	{
		n = new Node;
		n->life = true;
		n->place = i;
		n->Next = 0;
		tmp->Next = n;
		tmp = n;
	}
	tmp->Next = Head;
}

void Josephus_Flavius::Del()
{
	Node* temp = Head;         // ���������� ����� ��������� ��������
	Head = Head->Next;         // ������������� ������ �� ��������� �������
	delete temp;               // ������� ������ �������� �������
	--Count;
}

void Josephus_Flavius::DelAll()
{
	while (Head != 0)         // ���� ��� ���� ��������
		Del();                // ������� �������� �� ������
}

int Josephus_Flavius::who_is_Life(int people)
{
	int life = 0;
	Node* ptr;
	ptr = Head;
	for (int i = 0; i < Count; i++)
	{
		if (ptr->life)
			life++;
		ptr = ptr->Next;
	}
	isLife = life;
	return life;
}

void Josephus_Flavius::Dead(int step, int people)
{
	int countLife = 0;
	Node* ptr = Head;
	while (who_is_Life(people) >= step)
	{
		if (ptr->life)
			countLife++;
		if (ptr->life && countLife == step)
		{
			ptr->life = false;
			countLife = 0;
		}
		ptr = ptr->Next;
	}
}

void Josephus_Flavius::Print()
{
	Node* temp = Head;      // ���������� ����� ��������� ��������
	for (int i = 0; i < Count; i++)
	{
		if (temp->life)  // ������� ������
			cout << temp->place << "   ";
		temp = temp->Next;  // ��������� �� ��������� �������
	}
	cout << "\n";
}

int Josephus_Flavius::GetCount()
{
	return Count;
}
