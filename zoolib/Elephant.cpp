#include<iostream>
#include<string>

#include"Elephant.h"

Elephant::Elephant(const std::string& name, int age,double furlenght_)
	: Mammals(name, age, furlenght_) {
	if (furlenght < 0)
		throw std::invalid_argument("Furlenght cannot be negative.");
	else furlenght = furlenght_;
}
Elephant::Elephant(const Elephant& other) : Mammals(other) {}

void Elephant::MakeSound() const {
	std::cout << name << " says Trumpet!";
}
std::string Elephant::GetAnimal() const {
	return "elephant";
}
Elephant:: ~Elephant() {}