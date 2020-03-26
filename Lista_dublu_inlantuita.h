#pragma once
#include "Nod.h"

class ListaDubluInlantuita
{
private:
	Nod* head;
	Nod* tail;
	int size;

public:
	ListaDubluInlantuita();
	ListaDubluInlantuita(const ListaDubluInlantuita& list);
	~ListaDubluInlantuita();

	void insert_front(int);
	void insert_back(int);
	void insert_at(int, int);

	Nod* get_node(int);
	void remove_node(Nod*);
	void remove_at(int);

	int lenght() const;

	ListaDubluInlantuita operator+(const ListaDubluInlantuita& list);
	friend std::istream& operator>>(std::istream& in, ListaDubluInlantuita& list);
	friend std::ostream& operator<<(std::ostream& out, const ListaDubluInlantuita& list);
};

