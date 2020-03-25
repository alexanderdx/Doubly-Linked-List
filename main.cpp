#include <iostream>
#include "Lista_dublu_inlantuita.h"

int main()
{
	ListaDubluInlantuita lista;

	lista.insert_back(1);
	lista.insert_back(2);
	lista.insert_back(3);
	lista.insert_back(4);
	lista.insert_at(0, 69);
	lista.remove_at(3);
	lista.insert_front(700);
	std::cout << lista << std::endl;

	ListaDubluInlantuita lista2;
	std::cin >> lista2;
	std::cout << lista2 << std::endl;

	ListaDubluInlantuita suma = lista + lista2;
	std::cout << suma << std::endl;

	
	return 0;
}