#pragma once
#include <iostream>

class Nod
{
private:
	int info;
	Nod* prev;
	Nod* next;

public:
	Nod();
	Nod(int data);
	Nod(const Nod&);
	Nod(int data, Nod* prev, Nod* next);
	~Nod();

	int getData() const;
	Nod* getNext() const;
	Nod* getPrev() const;

	void setData(int data);
	void setNext(Nod* n);
	void setPrev(Nod* n);
};

