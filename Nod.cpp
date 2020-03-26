#include "Nod.h"

Nod::Nod()
{
	prev = nullptr;
	next = nullptr;
	info = 0;
}

Nod::Nod(int data)
{
	info = data;
	prev = nullptr;
	next = nullptr;
}

Nod::Nod(const Nod& src)
{
	this->info = src.info;
	this->prev = new Nod(src.prev->info);
	this->next = new Nod(src.next->info);
}

Nod::Nod(int data, Nod* prev, Nod* next)
{
	this->info = data;
	this->prev = prev;
	this->next = next;
}

Nod::~Nod()
{
	this->prev = nullptr;
	this->next = nullptr;
}

int Nod::getData() const
{
	return this->info;
}

Nod* Nod::getNext() const
{
	return this->next;
}

Nod* Nod::getPrev() const
{
	return this->prev;
}

void Nod::setData(int data)
{
	this->info = data;
}

void Nod::setNext(Nod* n)
{
	this->next = n;
}

void Nod::setPrev(Nod* n)
{
	this->prev = n;
}
