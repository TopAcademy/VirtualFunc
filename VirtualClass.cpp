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
	//ForSale s;
	//s.set_price(10, 20);
	//cout << s.get_price();


	ForSale * p;
	p = new Footwear("Shoes", 44, MEN, 5);
	p->set_price(990, 90);
	p->show_details();
	cout << p->get_price() << endl;


}
