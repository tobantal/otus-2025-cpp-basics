#pragma once
#include <string>

/**
 * Write new high score to the records table
 */
bool saveResult(
		const std::string& high_scores_filename,
		const std::string& user_name,
		const int attempts_count
		);

/**
 * Read the high score file and print all results
 */
bool printResult(const std::string& high_scores_filename);
