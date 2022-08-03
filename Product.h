#pragma once
#include <iostream>
#include <string>
using std::string;

enum UNITS { PIECE, KG, PACK, PAIR };

template <class TUNIT>
class Product {
protected:
    UNITS unit;
    string prod_name;
    TUNIT amount;
public:
    // constructors
    Product(const string& _name, UNITS _unit, TUNIT _amount = 0);
    // getters
    void show_details();
    // setters
    void set_amount(TUNIT _amount);
};

// Construct & Destruct

template <class TUNIT>
Product<TUNIT>::Product(const string& _name, UNITS _unit, TUNIT _amount) {
    prod_name = _name;
    unit = _unit;
    amount = _amount;
}

// Getters

template <class TUNIT>
void Product<TUNIT>::show_details() {
    std::cout << "-------------------" << std::endl;
    std::cout << "Details of product:" << std::endl;
    std::cout << " Name:  \t" << prod_name << std::endl;
    std::cout << " Amount:\t" << amount << std::endl;
    std::cout << "-------------------" << std::endl;
}

// Setters

template <class TUNIT>
void Product<TUNIT>::set_amount(TUNIT _amount) {
    amount = _amount;
}
