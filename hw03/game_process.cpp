#include "game_process.hpp"
#include <iostream>

/**
 * Game process.
 *
 * Return attempts count.
 */
unsigned int game_process(const unsigned int target_value) {
	int current_value = 0;
	bool not_win = true;
	int attempts_count = 0;

	std::cout << "Enter your guess:" << std::endl;

	do {
		std::cin >> current_value;

		if (current_value > target_value) {
			std::cout << "less than " << current_value << std::endl;
		} else if (current_value < target_value) {
			std::cout << "greater than " << current_value << std::endl;
		} else {
			std::cout << "you win!" << std::endl;
			not_win = false;
		}

		++attempts_count;

	} while (not_win);

	return attempts_count;
}
