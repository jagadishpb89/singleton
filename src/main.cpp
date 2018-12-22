#include <iostream>
#include <unistd.h>

#define FORSTART(a) for (int i=0; i<a; i++) {
#define FOREND }
#include "singleton.h"

int main() {
	int count = 0;
	FORSTART(6000)
	Singleton* ptr = Singleton::createInstance();
	std::cout << "Object ptr: " << ptr;
	ptr = nullptr;
	count++;
	std::cout << "Count : " << count << std::endl;
	sleep(1);
	FOREND
	return 0;
}


