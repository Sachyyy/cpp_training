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
	power(int k):pow(k)
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

int main()
{
	power p2(2);
	power p3(3);



	cout << " 6 to the power 3 --> 6^3  = " << p3(6) << endl;
	cout << " 3 to the power 3 --> 3^3  = " << p3(3) << endl;
    return 0;
}

