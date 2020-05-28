#pragma once
#include"Point.h"
#include "Line.h"
template <class T>
class Paralelepiped :public Square<T>
{
public:
	Paralelepiped();
	Paralelepiped(Line<T> a, Line<T> b, Line<T> c);
	Paralelepiped(Paralelepiped<T>& other);
	~Paralelepiped();
	ostream& print(ostream& vyvod) override;
	Paralelepiped& operator =(const Paralelepiped& other);
	Line<T> GetStoronaA();
	Line<T> GetStoronaB();
	Line<T> GetStoronaC();
	void SetStoronaA(Line<T> a);
	void SetStoronaB(Line<T> b);
	void SetStoronaC(Line<T> c);
	double Perimetr()override;
	double Area()override;
	double Volume()override;
private:
	Line<T> A;
	Line<T> B;
	Line<T> C;
};

template<class T>
inline Paralelepiped<T>::Paralelepiped()
{
	Line<T>a;
	A = a;
	Line<T>b;
	B = b;
	Line<T>c;
	C = c;
}

template<class T>
inline Paralelepiped<T>::Paralelepiped(Line<T> a, Line<T> b, Line<T> c)
{
	A = a;
	B = b;
	C = c;
}

template<class T>
inline Paralelepiped<T>::Paralelepiped(Paralelepiped& other)
{
	A = other.A;
	B = other.B;
	C = other.C;
}

template<class T>
inline Paralelepiped<T>::~Paralelepiped()
{
}

template<class T>
ostream& Paralelepiped<T>::print(ostream& vyvod)
{
	vyvod << "?????????????? ?? ????????? a= " << (*this).A.Length() << ", b= " << (*this).B.Length() << ", ?= " << (*this).C.Length();
	return vyvod;
}

template<class T>
inline Paralelepiped<T>& Paralelepiped<T>::operator=(const Paralelepiped<T>& other)
{
	if (this != &other)
	{

		A = other.A;
		B = other.B;
		C = other.C;
	}
	return *this;
}

template<class T>
inline Line<T> Paralelepiped<T>::GetStoronaA()
{
	return A;
}

template<class T>
inline Line<T> Paralelepiped<T>::GetStoronaB()
{
	return B;
}

template<class T>
inline Line<T> Paralelepiped<T>::GetStoronaC()
{
	return C;
}

template<class T>
inline void Paralelepiped<T>::SetStoronaA(Line<T> a)
{
	A = a;
}

template<class T>
inline void Paralelepiped<T>::SetStoronaB(Line<T> b)
{
	B = b;
}

template<class T>
inline void Paralelepiped<T>::SetStoronaC(Line<T> c)
{
	C = c;
}

template<class T>
inline double Paralelepiped<T>::Perimetr()
{
	double p;
	p = A.Length() * 4 + B.Length() * 4 + C.Length() * 4;
	return p;
}

template<class T>
inline double Paralelepiped<T>::Area()
{
	double s;
	s = 2 * A.Length() * B.Length() + 2 * C.Length() * B.Length() + 2 * A.Length() * C.Length();
	return s;
}

template<class T>
inline double Paralelepiped<T>::Volume()
{
	double v;
	v = A.Length() * B.Length() * C.Length();
	return v;
}