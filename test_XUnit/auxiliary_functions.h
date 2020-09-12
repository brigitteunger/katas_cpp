#pragma once 

#include <iostream>
#include <vector>


void print_vector(std::vector<std::vector<int>> to_print) {
	std::stringstream ss;
	for (size_t i = 0; i < to_print.size(); ++i) {
		for (size_t j = 0; j < to_print[i].size(); ++j) {
			if (j > 0)  ss << ",";
			ss << to_print[i][j];
		}
		ss << std::endl;
	}
	std::cout << ss.str() << std::endl;
}