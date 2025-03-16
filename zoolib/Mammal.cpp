#include<iostream>
#include<string>

#include"Mammals.h"

Mammals::Mammals(const std::string& name, int age, double furlenght_)
	: Animal(name, age), furlenght(furlenght_) {}

Mammals::Mammals(const Mammals& other) : Animal(other), furlenght(other.furlenght) {}

std::istream& operator>>(std::istream& in, Mammals&mammal) {
	std::string name;
	int age;
	double furlenght;

	std::cout << "enter name of " << mammal.GetAnimal() << ": ";
	in >> name;
	if (name.empty()) {
		throw std::invalid_argument("Name cannot be empty.");
	}
	else mammal.name = name;

	std::cout << "enter age of " << mammal.GetAnimal() << ": ";
	in >> age;
	if (age < 0) {
		throw std::invalid_argument("Age cannot be negative.");
	}
	else mammal.age = age;

	std::cout << "enter furlenght " << ": ";
	in >> furlenght;
	if (furlenght < 0) {
		throw std::invalid_argument("Furlenght cannot be negative.");
	}
	else mammal.furlenght = furlenght;
	
	return in;

}

std::ostream& operator<<(std::ostream& out, const Mammals&mammal) {
	out << mammal.GetAnimal() << " : " << "Name: " << mammal.name << ", " << "Age: " << mammal.age << ", " << "furlenght: " << mammal.furlenght;
	return out;
}
