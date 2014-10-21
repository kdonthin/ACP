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

	string getName()
	{
		return name;
	}

	void setName(string name)
	{
		this->name = name;
	}

	double getPay()
	{
		return pay;
	}

	void setPay(double pay)
	{
		this->pay = pay;
	}

	string toString()
	{
		stringstream sstr;

		sstr << name << ": " << pay;

		return sstr.str();
	}
};

