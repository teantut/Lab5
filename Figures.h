#pragma once
#include <string>
#include <iostream>
using namespace std;
class Figures
{
public:
	virtual double Area() = 0;
	virtual double Perimetr() = 0;
	virtual double Volume() = 0;
	virtual ostream& print(ostream& vyvod) = 0;
	friend ostream& operator<<(ostream& vyvod, Figures& other)
	{
		return other.print(vyvod);
	}
	~Figures()
	{}
};