#include <iostream>
#include "Light.h"

using namespace std;

Light::Light()
{
	this->state = false;
}

bool Light::isTurnOn() { return this->state; }

void Light::turnOff()
{
	this->state = false;
	cout << "���� ����." << endl;
}

void Light::turnOn() 
{
	this->state = true;
	cout << "���� �Ҵ�." << endl;
}