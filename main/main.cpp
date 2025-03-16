#include<iostream>

#include"Animal.h"
#include"Lion.h"
#include"Elephant.h"
#include"Eagle.h"
#include"Penguin.h"


int main() {

	Lion lion("tom", 3, 3.45);
	Elephant elephant("tom", 3, 3.45);
	Eagle eagle("tom", 3, 3.45);
	Penguin penguin("tom", 3, 3.45);
	
	std::cout << lion<<"\n";
	lion.MakeSound();
	std::cout<<"\n"<< elephant<<"\n";
	elephant.MakeSound();
	std::cout << "\n" << eagle<<"\n";
	eagle.MakeSound();
	std::cout << "\n" << penguin<<"\n";
	penguin.MakeSound();

	/*const int zooSize = 4;
	Animal* zoo[zooSize];

	zoo[0] = new Lion();
	zoo[1] = new Elephant();
	zoo[2] = new Eagle();
	zoo[3] = new Penguin();

	for (int i = 0; i != zooSize; ++i) {
		std::cin >> *zoo[i];
	}

	for (int i = 0; i != zooSize; ++i) {
		std::cout << *zoo[i];
		zoo[i]->MakeSound();
		std::cout << "\n";
	}

	for (int i = 0; i != zooSize; ++i) {
		delete zoo[i];
	}*/

}