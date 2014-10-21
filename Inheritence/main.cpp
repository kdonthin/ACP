#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
	Employee emp1("LeBron James", 5000);
	Employee emp2("Kobe Bryant", 4000);

	cout << emp1.toString() << endl;
	cout << emp2.toString() << endl;

	return 0;
}