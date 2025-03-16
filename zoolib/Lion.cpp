
#include<iostream>
#include<string>

#include"Lion.h"


Lion::Lion(const std::string& name, int age, double furlenght_)
	: Mammals(name, age, furlenght_) {
	if (furlenght < 0)
		throw std::invalid_argument("Furlenght cannot be negative.");
	else furlenght = furlenght_;
}
Lion::Lion(const Lion& other) : Mammals(other){}

void Lion::MakeSound() const {
	std::cout << name << " says Roaaor!";
}
std::string Lion::GetAnimal() const {
	return "lion";
}
Lion:: ~Lion() {}