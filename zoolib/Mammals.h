#pragma once

#include<string>
#include"Animal.h"

class Mammals : public Animal {
public:
	Mammals(const std::string& name = "unknow ", int age = 1, double furlenght = 1);
	Mammals(const Mammals& other);

	friend std::istream& operator>>(std::istream& in, Mammals& mammal );

	friend std::ostream& operator<<(std::ostream& out, const Mammals& mammal);
protected:
	double furlenght;
};
