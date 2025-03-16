#pragma once

#include<iostream>
#include<string>

#include"Mammals.h"

class Lion : public Mammals {
public:
	Lion(const std::string& name = "unknow", int age = 1, double furlenght = 1);
	Lion(const Lion& other);

	void MakeSound() const override;

	std::string GetAnimal() const override;

	~Lion() override;
};

