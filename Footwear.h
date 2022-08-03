#pragma once
#include <string>
#include "Product.h"
#include "Forsale.h"

enum Gender { MEN, WOMEN, BOYS, GIRLS };

class Footwear : public ProductType<int>, public ForSale
{
protected:
	static const std::string gender_names[];
protected:
	unsigned shoe_size;
	Gender gender;
public:
	// Constructors
	Footwear(const string& _name, unsigned _size, Gender _gender, int _amount = 0);
	// Getters
	void show_details();
};

// Statics

const std::string Footwear::gender_names[] = { "MEN", "WOMEN", "BOYS", "GIRLS" };

// Constructors


Footwear::Footwear(const string& _name, unsigned _size, Gender _gender, int _amount)
	: ProductType<int>(_name, PAIR, _amount)
{
	shoe_size = _size;
	gender = _gender;
}

// Getters

void Footwear::show_details()
{
	ProductType<int>::show_details();
	std::cout << " Size:  \t" << shoe_size << std::endl;
	std::cout << " Gender:\t" << gender_names[gender] << std::endl;
	std::cout << "-------------------" << std::endl;
}
