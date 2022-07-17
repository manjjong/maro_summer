#pragma once
class HomeFacade
{
private:
	class Computer* computer;
	class Light* light;
public:
	HomeFacade();
	~HomeFacade();
	void enterHome();
	void exitHome();
};

