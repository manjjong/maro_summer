#include <iostream>
#include "Computer.h"

using namespace std;

Computer::Computer()
{
	this->state = false;
}

bool Computer::isTurnOn() { return this->state; }

void Computer::turnOff() 
{
	this->state = false;
	cout << "컴퓨터를 끈다." << endl;
}

void Computer::turnOn()
{
	this->state = true;
	cout << "컴퓨터를 켠다." << endl;
}