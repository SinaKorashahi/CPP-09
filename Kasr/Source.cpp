#include<iostream>
#include<string>
#include"Header.h"

int main()
{
	std::string name;

	name = "kasr1: ";
	Kasr kasr1(0, 1);
	kasr1.show(name);

	name = "kasr2: ";
	Kasr kasr2(0, 1);
	kasr2.show(name);

	kasr1.Addition(kasr2);
	std::cout << std::endl;
	kasr1.Subtraction(kasr2);
	std::cout << std::endl;
	kasr1.Multiplication(kasr2);
	std::cout << std::endl;
	kasr1.Division(kasr2);
	std::cout << std::endl;

	system("pause");
	return 0;
}