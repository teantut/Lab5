#pragma once
#include"Point.h"
#include "Line.h"
#include <math.h>
template <class T>
class Parallelogram :public Line<T>
{
public:
	Parallelogram();
	Parallelogram(Line<T> a, Line<T> b, double _ugol);
	Parallelogram(Parallelogram<T>& other);
	~Parallelogram();
	ostream& print(ostream& vyvod) override;
	Parallelogram& operator =(const Parallelogram& other);
	Line<T> GetStoronaA();
	Line<T> GetStoronaB();
	double GetUgol();
	void SetStoronaA(Line<T> a);
	void SetStoronaB(Line<T> b);
	void SetUgol(double _ugol);
	double Perimetr()override;
	double Area()override;
	double Volume()override;
private:
	Line<T> A;
	Line<T> B;
	double ugol;
};

template<class T>
inline Parallelogram<T>::Parallelogram()
{
	Line<T>a;
	A = a;
	Line<T>b;
	B = b;
	ugol = 0;
}

template<class T>
inline Parallelogram<T>::Parallelogram(Line<T> a, Line<T> b, double _ugol)
{
	A = a;
	B = b;
	ugol = _ugol;
}

template<class T>
inline Parallelogram<T>::Parallelogram(Parallelogram& other)
{
	A = other.A;
	B = other.B;
	ugol = other.ugol;
}

template<class T>
inline Parallelogram<T>::~Parallelogram()
{
}

template<class T>
ostream& Parallelogram<T>::print(ostream& vyvod)
{
	vyvod << "?????????????? ?? ????????? a= " << (*this).A.Length() << ", b= " << (*this).B.Length() << " ? ?????? ????? " << (*this).ugol << " ????????";
	return vyvod;
}

template<class T>
inline Parallelogram<T>& Parallelogram<T>::operator=(const Parallelogram<T>& other)
{
	if (this != &other)
	{
		delete A;
		delete B;
		delete ugol;
		A = other.A;
		B = other.B;
		ugol = other.ugol;
	}
	return *this;
}

template<class T>
inline Line<T> Parallelogram<T>::GetStoronaA()
{
	return A;
}

template<class T>
inline Line<T> Parallelogram<T>::GetStoronaB()
{
	return B;
}

template<class T>
inline double Parallelogram<T>::GetUgol()
{
	return ugol;
}

template<class T>
inline void Parallelogram<T>::SetStoronaA(Line<T> a)
{
	A = a;
}

template<class T>
inline void Parallelogram<T>::SetStoronaB(Line<T> b)
{
	B = b;
}

template<class T>
inline void Parallelogram<T>::SetUgol(double _ugol)
{
	ugol = _ugol;
}

template<class T>
inline double Parallelogram<T>::Perimetr()
{
	double p;
	p = (A.Length() + B.Length()) * 2;
	return p;
}

template<class T>
inline double Parallelogram<T>::Area()
{
	double s;
	s = sin(ugol) * A.Length() * B.Length();
	return s;
}

template<class T>
inline double Parallelogram<T>::Volume()
{
	return 0;
}