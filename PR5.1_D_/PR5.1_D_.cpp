#include <iostream>
#include <iomanip>
#include "Pair.h"
#include "Money.h"
#include <sstream>

using namespace std;

int main()
{
	Money m(0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Pair l;

	Division(m, l);
	FracDivision(m, l);

	Money m1(0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	cin >> m1;
	Pair l1;
	cin >> l1;

	cout << "Division : " << Division(m1, l1) << endl;
	cout << "FracDivision: " << FracDivision(m1, l1) << endl;

	if (ComparisionGreat(m1, l1))
		cout << "FirstSum > SecondSum" << endl;
	if (ComparisionLess(m1, l1))
		cout << "FirstSum < SecondSum" << endl;
	if (ComparisionEqual(m1, l1))
		cout << "FirstSum = SecondSum" << endl;

	return 0;
}