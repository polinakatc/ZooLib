#include<iostream>
#include<string>

#include"Penguin.h"

Penguin::Penguin(const std::string& name, int age, double wingspan_)
	: Birds(name, age, wingspan_) {
	if (wingspan < 0)
		throw std::invalid_argument("Wingspan cannot be negative.");
	else wingspan = wingspan_;
}
Penguin::Penguin(const Penguin& other) : Birds(other) {}

void Penguin::MakeSound() const {
	std::cout << name << "says Honk!";
}
std::string Penguin::GetAnimal() const {
	return "penguin";
}
Penguin::~Penguin() {}