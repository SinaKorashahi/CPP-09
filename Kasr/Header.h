#pragma once
#include<iostream>

class Kasr
{
public:
	Kasr(int s, int m)
	{
		std::cout << "\nEnter surat: ";
		std::cin >> s;
		surat = s;
		std::cout << "\nEnter makhraj: ";
		std::cin >> m;
		makhraj = m;
	}
	void show(std::string name)
	{
		std::cout << name << "" << this->surat << "/" << this->makhraj << std::endl;
	}
	void Addition(Kasr kasr_digar)
	{
		int s = surat * kasr_digar.makhraj + makhraj * kasr_digar.surat;
		int m = makhraj * kasr_digar.makhraj;
		std::cout << "\nAddition: " << s << "/" << m;
	}
	void Subtraction(Kasr kasr_digar)
	{
		int s = surat * kasr_digar.makhraj - makhraj * kasr_digar.surat;
		int m = makhraj * kasr_digar.makhraj;
		std::cout << "\nSubtraction: " << s << "/" << m;
	}
	void Multiplication(Kasr kasr_digar)
	{
		int s = surat * kasr_digar.surat;
		int m = makhraj * kasr_digar.makhraj;
		std::cout << "\nMultiplication: " << s << "/" << m;
	}
	void Division(Kasr kasr_digar)
	{
		int s = surat * kasr_digar.makhraj;
		int m = makhraj * kasr_digar.surat;
		std::cout << "\nDivision: " << s << "/" << m;
	}
private:
	int surat, makhraj;
};
