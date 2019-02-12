#include <iostream>

#include "bot.h"

Bot::Bot() {};

void Bot::login(const std::string &token) {
	std::cout << "logging in with: " << token << std::endl;
	this->_token = token;
}

void Bot::onEvent(const std::function<std::string(std::string)> &callback) {
	std::cout << "executing callback" << std::endl;

	callback(
		"{ "
		"\"eventData\" : {"
		"\"id\" : \"" + this->_token +
			"\" }"
		"}"
	);
}