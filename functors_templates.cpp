// Test.cpp : Defines the entry point for the console application.
//

// This is my test code
// This repo will be used to write test codes.

#include "stdafx.h"
#include <iostream>
#include <memory>

class power
{
private:
	int pow;
	power() {};

public:
	power(int k) :pow(k)
	{
	}

	int operator () (int x)const
	{
		int ret = x;
		for (int i = 0; i < pow; i++)
		{
			ret *= x;
		}
		return ret;
	}

};

using namespace std;

template <typename T> T abs(T t)
{
	if (t < 0)
	{
		return -t;
	}
	return t;
};


int main1()
{
	power p2(2);
	power p3(3);

	unique_ptr<int> pint(new int(4));

	auto p = move(pint);

	cout << " 4 to the power 3 (with unique_ptr) --> 4^3  = " << p3(*(p)) << endl;



	cout << " 6 to the power 3 --> 6^3  = " << p3(6) << endl;
	cout << " 3 to the power 3 --> 3^3  = " << p3(3) << endl;

	cout << " new template function" << abs<int>(-5) << endl;
	cout << " new template function" << abs<short>(-11) << endl;
	cout << " new template function" << abs<long>(-999) << endl;
	cout << " new template function" << abs<float>(-12.343) << endl;
	cout << " new template function" << abs<double>(-764.386) << endl;

	cout << " new template function" << abs<int>(5) << endl;
	cout << " new template function" << abs<short>(11) << endl;
	cout << " new template function" << abs<long>(999) << endl;
	cout << " new template function" << abs<float>(12.343) << endl;
	cout << " new template function" << abs<double>(764.386) << endl;

	return 0;
}

