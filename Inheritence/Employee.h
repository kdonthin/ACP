#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class Employee
{
private:
	string name;
	double pay;
public:
	Employee(string name, double pay)
	{
		this->name = name;
		this->pay = pay;
	}
	~Employee();
	string toString()
	{
		stringstream sstr;

		sstr << name << ": " << pay;

		return sstr.str();
	}
};

