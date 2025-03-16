#include<iostream>
#include<string>

#include"Eagle.h"

Eagle::Eagle(const std::string& name, int age, double wingspan_)
	: Birds(name, age, wingspan_) {
	if (wingspan < 0)
		throw std::invalid_argument("Wingspan cannot be negative.");
	else wingspan = wingspan_;
}
Eagle::Eagle(const Eagle& other) : Birds(other) {}

void Eagle::MakeSound() const {
	std::cout  << name << " says Screeech!";
}
std::string Eagle::GetAnimal() const {
	return "eagle";
}
Eagle::~Eagle() {}