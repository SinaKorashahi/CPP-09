#include<iostream>
#include"Header.h"

int main()
{
	std::cout << "\nTime1: ";
	Time T1(0, 0, 0);

	std::cout << "\nTime2: ";
	Time T2(0, 0, 0);
	std::cout << "\nAddition of T1 and T2:";
	T1.addition(T2);
	std::cout << "\nSubtraction of T1 and T2:";
	T1.difference(T2);
	std::cout << "\nConvertion of T1 = ";
	T1.convertTimeToSecond();
	std::cout << "\nConvertion of T2 = ";
	T2.convertTimeToSecond();
	std::cout << "\nTime3: ";
	Time T3(0);
	std::cout << "\nConvertion of T3 = ";
	T3.convertSecondToTime();

	return 0;
}