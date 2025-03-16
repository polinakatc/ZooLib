#pragma once

#include<iostream>
#include<string>

#include"Birds.h"

class Eagle : public Birds {
public:
	Eagle(const std::string& name = "unknow", int age = 1,double wingspan = 1);
	Eagle(const Eagle& other);

	void MakeSound() const override;
	std::string GetAnimal() const override;
	~Eagle() override;
}; 
