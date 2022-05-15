#pragma once
#include "Money.h"
class Pair :
	public Money
{
public:
	Pair();

	friend double Division(Money& n, Money& m);
	friend double FracDivision(Money& n, Money& m);
	friend bool ComparisionGreat(Money& n, Money& m);
	friend bool ComparisionLess(Money& n, Money& m);
	friend bool ComparisionEqual(Money& n, Money& m);
};
