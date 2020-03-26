#include <iostream>
#include "Lista_dublu_inlantuita.h"

int main()
{
	ListaDubluInlantuita lista;

	lista.insert_back(1);
	lista.insert_back(2);
	lista.insert_back(3);
	lista.insert_back(4);
	lista.insert_back(5);
	std::cout << lista << std::endl;

	std::cout << "Inseram pe pozitia 3 valoarea 42: " << std::endl;
	lista.insert_at(2, 42);
	std::cout << lista << std::endl;

	std::cout << "Eliminam elemntul de pe pozitia 4: " << std::endl;
	lista.remove_at(3);
	std::cout << lista << std::endl;

	ListaDubluInlantuita lista2;
	std::cout << "\nIntroduceti valorile unei noi liste (pana la 0): " << std::endl;
	std::cin >> lista2;
	std::cout << "\nLista introdusa este: ";
	std::cout << lista2 << std::endl;

	std::cout << "\nCele doua liste concatenate: ";
	ListaDubluInlantuita suma = lista + lista2;
	std::cout << suma << std::endl;

	suma.printReverse(true);
	std::cout << suma << std::endl;
	
	return 0;
}