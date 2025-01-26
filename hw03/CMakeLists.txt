cmake_minimum_required(VERSION 3.12)

project(03.homework)

add_executable(
	check_value
	check_value.cpp
	random_value.hpp
	random_value.cpp
	read_user_name.hpp
	read_user_name.cpp
	game_process.hpp
	game_process.cpp
	save_print_result.hpp
	save_print_result.cpp
)

add_executable(
	argument
	argument.cpp
)

set_target_properties(check_value PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)