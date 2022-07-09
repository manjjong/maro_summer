#pragma once
#include "WebRequester.h"

class WebClient {
private:
	WebRequester *webRequester;

public:
	WebClient(WebRequester *webRequester);
	~WebClient();
	void doWork();
};