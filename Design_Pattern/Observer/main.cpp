#include <iostream>
#include "WebAdapter.h"
#include "WebClient.h"
#include "FancyRequester.h"
#include "OldWebRequester.h"
#include "Observer.h"
#include "Notice.h"

using namespace std;

void execute_Adapter()
{
	WebAdapter * adapter = new WebAdapter(new FancyRequester());
	WebClient * fancyClient = new WebClient(adapter);
	WebClient * oldClient = new WebClient(new OldWebRequester());
	fancyClient->doWork();
	oldClient->doWork();

	delete oldClient;
	delete fancyClient;
	delete adapter;
}

void execute_Observer()
{
	Notice * notice = new Notice();
	Observer * user1 = new Observer("A Observer");
	Observer * user2 = new Observer("B Observer");
	
	notice->registerObserver(user1);
	notice->registerObserver(user2);
	notice->notifyObservers();
	notice->removeObserver(user1);
	notice->notifyObservers();
	notice->removeObserver(user2);
	delete user1;
	delete user2;
	delete notice;
}

int main(void)
{
	// execute_Adapter();
	execute_Observer();
}