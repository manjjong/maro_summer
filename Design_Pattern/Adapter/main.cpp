#include <iostream>
#include "WebAdapter.h"
#include "WebClient.h"
#include "FancyRequester.h"
#include "OldWebRequester.h"

using namespace std;

int main(void)
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