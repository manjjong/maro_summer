#include <iostream>
#include "Observer.h"

Observer::Observer(string name)
{
	this->name = name;
}

void Observer::update() 
{
	cout << this->name << endl;
}