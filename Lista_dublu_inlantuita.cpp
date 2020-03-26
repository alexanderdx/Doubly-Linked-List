#include "Lista_dublu_inlantuita.h"

ListaDubluInlantuita::ListaDubluInlantuita()
{
	head = nullptr;
	tail = nullptr;
	size = 0;
}

ListaDubluInlantuita::ListaDubluInlantuita(const ListaDubluInlantuita& src)
{
	if (src.head == nullptr) {
		this->head = nullptr;
		this->tail = nullptr;
		this->size = 0;
	}
	else {
		Nod* srcIter = src.head;

		while (srcIter != nullptr)
		{
			this->insert_back(srcIter->getData());
			srcIter = srcIter->getNext();
		}
	}

}

ListaDubluInlantuita::~ListaDubluInlantuita()
{
	Nod* iter = head;
	while (iter != nullptr)
	{
		Nod* delete_ptr = iter;
		iter = iter->getNext();
		delete delete_ptr;
	}
}

void ListaDubluInlantuita::insert_front(int value)
{
	Nod* temp = new Nod(value);

	if (head == nullptr)
		head = tail = temp;
	else {
		head->setPrev(temp);
		temp->setNext(head);
		head = temp;
	}

	size++;
}

void ListaDubluInlantuita::insert_back(int value)
{
	Nod* temp = new Nod(value);

	if (tail == nullptr)
		head = tail = temp;
	else {
		tail->setNext(temp);
		temp->setPrev(tail);
		tail = temp;
	}
	
	size++;
}

Nod* ListaDubluInlantuita::get_node(int index)
{
	if (index == 0)
		return head;
	else if (index == size - 1)
		return tail;
	else if (index < 0 || index >= size)
		return nullptr;


	Nod* it = head;
	for (int i = 0; i < index; ++i)
		it = it->getNext();

	return it;
}

void ListaDubluInlantuita::insert_at(int index, int value)
{
	Nod* pos = get_node(index);

	if (pos == head)
		insert_front(value);
	else if (pos != nullptr) {
		Nod* node = new Nod(value);
		node->setNext(pos);
		node->setPrev(pos->getPrev());
		pos->getPrev()->setNext(node);
		pos->setPrev(node);

		size++;
	}
}

void ListaDubluInlantuita::remove_node(Nod* node)
{
	if (head == tail) { // daca avem un singur element
		head = tail = nullptr;
	}
	else if (node == head) {
		head = head->getNext();
		head->setPrev(nullptr);
	}
	else if (node == tail) {
		tail = tail->getPrev();
		tail->setNext(nullptr);
	}
	else {
		node->getNext()->setPrev(node->getPrev());
		node->getPrev()->setNext(node->getNext());
	}
	delete node;
	size--;
}

void ListaDubluInlantuita::remove_at(int index)
{
	Nod* node = get_node(index);
	if (node != nullptr)
		remove_node(node);
}

int ListaDubluInlantuita::lenght() const
{
	return this->size;
}

void ListaDubluInlantuita::printReverse(bool val)
{
	this->reverse = val;
}

ListaDubluInlantuita ListaDubluInlantuita::operator+(const ListaDubluInlantuita& list)
{
	ListaDubluInlantuita temp = *this;
	Nod* iter = list.head;
	while (iter != nullptr)
	{
		temp.insert_back(iter->getData());
		iter = iter->getNext();
	}

	return temp;
}

std::istream& operator>>(std::istream& in, ListaDubluInlantuita& list)
{
	//Vom citi pana la introducerea valorii 0

	int value;
	in >> value;
	while (value != 0)
	{
		list.insert_back(value);
		in >> value;
	}

	return in;
}

std::ostream& operator<<(std::ostream& out, const ListaDubluInlantuita& list)
{
	if (list.size == 0)
		out << "Lista vida!\n";
	else {
		if (!list.reverse) {
			Nod* iter = list.head;
			while (iter)
			{
				out << iter->getData() << ' ';
				iter = iter->getNext();
			}
		}
		else {
			Nod* iter = list.tail;
			while (iter)
			{
				out << iter->getData() << ' ';
				iter = iter->getPrev();
			}
		}
	}

	return out;
}