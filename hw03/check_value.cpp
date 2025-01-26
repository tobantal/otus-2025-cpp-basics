#include <iostream>

#include "random_value.hpp"
#include "read_user_name.hpp"
#include "game_process.hpp"
#include "save_print_result.hpp"

#define high_scores_filename "high_scores.txt"
#define max_value 100

int main() {

	// init user name
	std::string user_name = read_user_name();

	// init target value
	const unsigned int target_value = random_value(max_value);

	// FIXME: for test only
	std::cout << "generated random value (visible for test only):"
			<< target_value << std::endl;

	// game process (guess value)
	int attempts_count = game_process(target_value);

	// save result
	bool saveRes = saveResult(high_scores_filename, user_name, attempts_count);
	if (!saveRes) {
		return -1;
	}

	// print result
	bool printRes = printResult(high_scores_filename);
	if (!printRes) {
		return -1;
	}

	return 0;
}
