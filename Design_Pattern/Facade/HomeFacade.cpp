#include <iostream>
#include "HomeFacade.h"
#include "Computer.h"
#include "Light.h"

using namespace std;

HomeFacade::HomeFacade()
{
	this->computer = new Computer();
	this->light = new Light();
}

HomeFacade::~HomeFacade()
{
	delete this->computer;
	delete this->light;
}

void HomeFacade::enterHome()
{
	cout << "<< �� ���� >>" << endl;
	this->computer->turnOn();
	this->light->turnOn();
}

void HomeFacade::exitHome()
{
	cout << "<< �� ���� >>" << endl;
	this->computer->turnOff();
	this->light->turnOff();
}