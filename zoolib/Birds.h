#pragma once

#include<iostream>
#include<string>

#include"Animal.h"

class Birds : public Animal {
public:
	Birds(const std::string& name = "unknow", int age = 1, double wingspan = 1);
	Birds(const Birds& other);

	friend std::istream& operator>>(std::istream& in, Birds& bird);

	friend std::ostream& operator<<(std::ostream& out, const Birds& bird);
protected:
	double wingspan;
}; 
