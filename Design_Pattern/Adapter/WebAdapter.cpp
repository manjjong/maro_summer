#include "WebAdapter.h"

WebAdapter::WebAdapter(FancyRequester *fancyRequester)
{
	this->fancyRequester = fancyRequester;
}

WebAdapter::~WebAdapter()
{
	delete this->fancyRequester;
}

void WebAdapter::requestHandler()
{
	this->fancyRequester->fancyRequestHandler();
}