#include <functional>
#include <string>
#include "discordcpp_Export.h"

class Bot {
public:
	discordcpp_EXPORT Bot();

	discordcpp_EXPORT void login(const std::string &token);

	discordcpp_EXPORT void onEvent(const std::function<std::string(std::string)> &callback);

private:
	std::string _token;
};
