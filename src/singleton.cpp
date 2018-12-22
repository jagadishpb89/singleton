#include <iostream>
#include <cstddef>

#include "singleton.h"

Singleton* Singleton::ptr = nullptr;

Singleton::Singleton() {
	std::cout << "Singleton constructor called." << std::endl;
}

Singleton::~Singleton() {
	std::cout << "Singleton destructor called." << std::endl;
}

Singleton* Singleton::createInstance() {
	std::cout << "Singleton createInstance called." << std::endl;
	if (ptr == nullptr) {
		ptr = new Singleton();
	}
	return ptr;
}

void Singleton::showDetails() {
	std::cout << "This is the singleton class." << std::endl;
}
