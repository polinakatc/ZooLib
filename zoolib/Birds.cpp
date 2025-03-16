#include<iostream>
#include<string>

#include "Birds.h"

Birds::Birds(const std::string& name, int age, double wingspan_)
	: Animal(name, age), wingspan(wingspan_){}

Birds::Birds(const Birds& other) : Animal(other), wingspan(other.wingspan) {}

std::istream& operator>>(std::istream& in, Birds& bird) {
	std::string name;
	int age;
	double wingspan;

	std::cout << "enter name of " << bird.GetAnimal() << ": ";
	in >> name;
	if (name.empty()) {
		throw std::invalid_argument("Name cannot be empty.");
	}
	else bird.name = name;

	std::cout << "enter age of " << bird.GetAnimal() << ": ";
	in >> age;
	if (age < 0) {
		throw std::invalid_argument("Age cannot be negative.");
	}
	else bird.age = age;

	std::cout << "enter furlenght " << ": ";
	in >> wingspan;
	if (wingspan < 0) {
		throw std::invalid_argument("Wingspan cannot be negative.");
	}
	else bird.wingspan = wingspan;

	return in;

}

std::ostream& operator<<(std::ostream& out, const Birds& bird) {
	out << bird.GetAnimal() << " : " << "Name: " << bird.name << ", " << "Age: " << bird.age << ", " << "wingspan: " << bird.wingspan;
	return out;
}

