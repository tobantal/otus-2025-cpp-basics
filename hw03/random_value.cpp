#include "random_value.hpp"
#include <iostream>

#include <cstdlib>
#include <ctime>

/*
int main() {

	const unsigned int max_value = 100;

	std::cout << random_value(max_value) << std::endl;

	return 0;
}
*/

unsigned int random_value(const unsigned int max_value) {
	std::srand(std::time(nullptr)); // use current time as seed for random generator
	const int random_value = std::rand() % max_value;
	return random_value;
}
