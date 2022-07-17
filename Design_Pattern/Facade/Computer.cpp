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
	cout << "��ǻ�͸� ����." << endl;
}

void Computer::turnOn()
{
	this->state = true;
	cout << "��ǻ�͸� �Ҵ�." << endl;
}