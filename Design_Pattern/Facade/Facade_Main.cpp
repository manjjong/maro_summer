#include <iostream>
#include "HomeFacade.h"

using namespace std;

int main()
{
	unique_ptr<HomeFacade> home = make_unique<HomeFacade>();

	home->exitHome();
	home->enterHome();
}