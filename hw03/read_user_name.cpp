#include "read_user_name.hpp"

#include <iostream>
#include <string>

std::string read_user_name() {
	std::cout << "Hi! Enter your name, please:" << std::endl;
	std::string user_name;
	std::cin >> user_name;
	return user_name;
}
