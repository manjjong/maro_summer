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
	cout << "<< 집 입장 >>" << endl;
	this->computer->turnOn();
	this->light->turnOn();
}

void HomeFacade::exitHome()
{
	cout << "<< 집 퇴장 >>" << endl;
	this->computer->turnOff();
	this->light->turnOff();
}