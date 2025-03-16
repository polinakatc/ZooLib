#pragma once

#include<iostream>
#include<string>



class Animal {
public:
	Animal(const std::string& name_ = "Unknow", int age_ = 1);
	Animal(const Animal& other);

	virtual void MakeSound() const = 0;
	virtual std::string GetAnimal() const = 0;

	friend std::istream& operator>>(std::istream& in, Animal& animal);
	friend std::ostream& operator<<(std::ostream& out, const Animal& animal);

	virtual ~Animal();

protected:
	std::string name;
	int age;
};