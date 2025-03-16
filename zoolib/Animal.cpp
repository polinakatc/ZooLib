
#include<iostream>
#include<string>
#include<stdexcept>

#include "Animal.h"



Animal::Animal(const std::string& name_, int age_) : name(name_), age(age_){
	if (name.empty()) {
		throw std::invalid_argument("Name cannot be empty.");
	}
	if (age < 0) {
		throw std::invalid_argument("Age cannot be negative.");
	}
}
Animal::Animal(const Animal& other) : name(other.name), age(other.age) {}



Animal:: ~Animal() {}





