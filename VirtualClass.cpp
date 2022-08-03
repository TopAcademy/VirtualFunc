/******************************************
 Проект VirtualClass
 Практическая реализация темы урока
 "Виртуальные функции и абстрактные классы"
 03 авг 2022
 ******************************************/

#include <iostream>
#include <string>
#include "footwear.h"
using std::string;
using std::cout;
using std::endl;

int main(int argc, char** argv)
{
	Footwear shoes1("Sneakers", 42, MEN);
	shoes1.show_details();
	shoes1.set_price(1000, 50);
	cout << shoes1.get_price() << endl;
}
