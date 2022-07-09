#pragma once
#include "WebRequester.h"
#include "FancyRequester.h"

class WebAdapter : public WebRequester
{
private:
	FancyRequester * fancyRequester;
public:
	WebAdapter(FancyRequester * fancyRequester);
	~WebAdapter();
	virtual void requestHandler();
};