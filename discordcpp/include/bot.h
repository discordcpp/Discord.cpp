#include <string>
#include "discordcpp_Export.h"
#include "EventListener.h"

class Bot {
public:
	discordcpp_EXPORT Bot();

	discordcpp_EXPORT void login(const std::string &token);

	discordcpp_EXPORT void addEventListener(const EventListener &eventListener);
};
