#pragma once

#include<iostream>
#include<string>

#include"Birds.h"

class Penguin : public Birds {
public:
	Penguin(const std::string& name = "unknow", int age = 1, double winspan = 1);
	Penguin(const Penguin& other);

	void MakeSound() const override;
	std::string GetAnimal() const override;
	~Penguin() override;
};

