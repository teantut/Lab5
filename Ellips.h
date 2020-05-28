#pragma once
#pragma once
#include"Point.h"
#include "Line.h"
template <class T>
class Ellips :public Line<T>
{
public:
	Ellips();
	Ellips(Line<T> a, Line<T> b);
	Ellips(Ellips<T>& other);
	~Ellips();
	ostream& print(ostream& vyvod) override;
	Ellips& operator =(const Ellips& other);
	Line<T> GetOsX();
	Line<T> GetOsY();
	void SetOsX(Line<T> a);
	void SetOsY(Line<T> b);
	double Perimetr()override;
	double Area()override;
	double Volume()override;
private:
	Line<T> A;
	Line<T> B;
};

template<class T>
inline Ellips<T>::Ellips()
{
	Line<T>a;
	A = a;
	Line<T>b;
	B = b;
}

template<class T>
inline Ellips<T>::Ellips(Line<T> a, Line<T> b)
{
	A = a;
	B = b;
}

template<class T>
inline Ellips<T>::Ellips(Ellips& other)
{
	A = other.A;
	B = other.B;
}

template<class T>
inline Ellips<T>::~Ellips()
{
}

template<class T>
ostream& Ellips<T>::print(ostream& vyvod)
{
	vyvod << "?????? ? ????? a= " << (*this).A.Length() << ", b= " << (*this).B.Length();
	return vyvod;
}

template<class T>
inline Ellips<T>& Ellips<T>::operator=(const Ellips<T>& other)
{
	if (this != &other)
	{
		A = other.A;
		B = other.B;
	}
	return *this;
}

template<class T>
inline Line<T> Ellips<T>::GetOsX()
{
	return A;
}

template<class T>
inline Line<T> Ellips<T>::GetOsY()
{
	return B;
}

template<class T>
inline void Ellips<T>::SetOsX(Line<T> a)
{
	A = a;
}

template<class T>
inline void Ellips<T>::SetOsY(Line<T> b)
{
	B = b;
}

template<class T>
inline double Ellips <T>::Perimetr()
{
	double p;
	T a = A.Length() / 2;
	T b = B.Length() / 2;
	p = (3.14 * a * b + (a - b) * (a - b)) * 4;
	p = p / (a + b);
	return p;
}

template<class T>
inline double Ellips<T>::Area()
{
	double s;
	T a = A.Length() / 2;
	T b = B.Length() / 2;
	s = 3.14 * a * b;
	return s;
}

template<class T>
inline double Ellips<T>::Volume()
{
	return 0;
}
© 2020 GitHub, Inc.