#include <iostream>
#include "Notice.h"

Notice::Notice()
{
	this->observers = new list<Observer*>();
}

Notice::~Notice()
{
	list<Observer*>::iterator iter;
	
	for (iter = this->observers->begin(); iter != this->observers->end(); iter++)
	{
		delete (*iter);
	}
	delete this->observers;
}

void Notice::registerObserver(Observer * observer)
{
	this->observers->push_back(observer);
}

void Notice::removeObserver(Observer * observer)
{
	this->observers->remove(observer);
}

void Notice::notifyObservers()
{
	list<Observer*>::iterator iter;

	for (iter = this->observers->begin(); iter != this->observers->end(); iter++)
	{
		(*iter)->update();
	}
}