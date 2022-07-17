#pragma once
class Light
{
private:
	bool state;

public:
	Light();
	void turnOn();
	void turnOff();
	bool isTurnOn();
};

