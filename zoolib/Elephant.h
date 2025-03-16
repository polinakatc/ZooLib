#pragma once

#include<iostream>
#include<string>

#include"Mammals.h"

class Elephant : public Mammals {
public:
	Elephant(const std::string& name = "unknow", int age = 1,double furlenght = 1);

	Elephant(const Elephant& other);

	void MakeSound() const override;
	std::string GetAnimal() const override;
	~Elephant() override;
};
