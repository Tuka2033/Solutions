#include "Student.h"
#include <iostream>
using namespace std;

cStudent::cStudent()
{
	roll = 1;
	name[0] = '\0';
}

void cStudent::display()
{
	cout << "Roll No :: "<< roll<<endl;
	cout << "Name    :: "<<name<<endl;
}

