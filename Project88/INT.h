#pragma once
#include<iostream>
#include<string>
#include<cstring>
#include<iomanip>
using namespace std;

class INT
{


public:
	INT()
	{

	}
	INT(int);

	void setA(int);

	int sumAddition(int);

	int substraction(int);

	int multiplicotion(int);
	int getA() const;

private:
	int a;

};