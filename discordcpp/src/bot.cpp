#include <iostream>

#include "bot.h"

Bot::Bot() {};

void Bot::login(const std::string &token) {
	std::cout << "logging in with: " << token << std::endl;
}