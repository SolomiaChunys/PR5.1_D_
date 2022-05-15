#include "Pair.h"
#include <iostream>
#include <sstream>

using namespace std;

class Error
{
	string message;
public:
	Error(string message)
		: message(message)
	{}
	string What() { return message; }
};

class E : public exception
{
	string message;
public:
	E(string message)
		: message(message)
	{}
	string What() { return message; }
};


Pair::Pair()
{
	sethrn500(0);
	sethrn200(0);
	sethrn100(0);
	sethrn50(0);
	sethrn20(0);
	sethrn10(0);
	sethrn5(0);
	sethrn2(0);
	sethrn1(0);
	setkop50(0);
	setkop25(0);
	setkop10(0);
	setkop5(0);
	setkop2(0);
	setkop1(0);
}

double Division(Money& n, Money& m)
{
	try
	{
		if (m.sum() == 0)
		{
			throw Error("The second sum is zero,and zero can`t be divided)");
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	return n.sum() / m.sum();
}

double FracDivision(Money& n, Money& m)
{
	double N = 0;
	try
	{
		if (N == 0)
		{
			throw Error("The number can`t be zero(");
		}
	}
	catch (Error a)
	{
		cout << a.What() << endl;
	}
	double d = n.sum() + m.sum();
	d /= N;
	return d;
}

bool ComparisionGreat(Money& n, Money& m)
{
	return n.sum() > m.sum();
}
bool ComparisionLess(Money& n, Money& m)
{
	return n.sum() < m.sum();
}
bool ComparisionEqual(Money& n, Money& m)
{
	return n.sum() == m.sum();
}