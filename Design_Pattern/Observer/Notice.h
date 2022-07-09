#pragma once
#include <list>
#include "Observer.h"

class Notice
{
private:
	std::list<Observer*> * observers;
public:
	Notice();
	~Notice();
	void registerObserver(Observer * observer);
	void removeObserver(Observer * observer);
	void notifyObservers();
};