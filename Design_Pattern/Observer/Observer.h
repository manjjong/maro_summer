#pragma once
#include <string>

using namespace std;

class Observer
{
public:
	string name;
	Observer(string name);
	void update();
};