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
	Node* Head;    // ����� ��������� �������� ������
	Node* Tail;    // ����� ���������� �������� ������
	int Count;     // ���������� ��������� ������
	int isLife;

public:
	Josephus_Flavius();  // �����������
	~Josephus_Flavius(); // ����������
	void Add(int people);
	void Del();          // �������� �������� ������. ��������� �������� �������
	void DelAll();       // �������� ����� ������
	int who_is_Life(int step);
	void Dead(int step, int people);
	void Print();        // ����� ����������� ������. ����� ���������� � ��������� ��������
	int GetCount();      // ��������� ���������� ���������, ����������� � ������
};
