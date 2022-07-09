#include "WebClient.h"

WebClient::WebClient(WebRequester * webRequester)
{
	this->webRequester = webRequester;
}

WebClient::~WebClient()
{
	delete this->webRequester;
}

void WebClient::doWork()
{
	webRequester->requestHandler();
}