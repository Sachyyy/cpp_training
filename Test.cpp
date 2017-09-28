// Test.cpp : Defines the entry point for the console application.
//

// This is my test code
// This repo will be used to write test codes.

#include "stdafx.h"
#include <iostream>
#include <thread>
#include <memory>


using namespace std;

void prints()
{
	int i = 0;
	while (i < 4)
	{
		cout << "printing sachith" << endl;
		this_thread::sleep_for(2s);
		i++;
	}

}

void printm()
{
	int i = 0;
	while (i < 3)
	{
		cout << "printing mandy" << endl;
		this_thread::sleep_for(2s);
		i++;
	}
}

int main()
{
	cout << "printing main1" << endl;
	std::thread t1(prints);
	t1.join();
	cout << "printing main2" << endl;
	std::thread t2(printm);
	t2.join();
	cout << "printing main3" << endl;

    return 0;
}

