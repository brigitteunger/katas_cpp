//#define BOOST_TEST_MAIN
#include <boost/test/included/unit_test.hpp>
#include <iostream>
#include <sstream>

#include "auxiliary_functions.h"
#include "combination_sum_3.h"


BOOST_AUTO_TEST_SUITE(combination_sum_3)

BOOST_AUTO_TEST_CASE(combination_sum_1) {
	int k(3);
	int n(9);
	std::vector<std::vector<int>> expected = { {1,2,6},{1,3,5},{2,3,4} };
	std::cout << "expected: " << std::endl;
	print_vector(expected);
	Solution sol;

	std::vector<std::vector<int>> actual = sol.combinationSum3(k, n);
	std::cout << "actual: " << std::endl;
	print_vector(actual);

	BOOST_CHECK(expected == actual);
}

BOOST_AUTO_TEST_CASE(combination_sum_2) {
	int k(3);
	int n(7);
	std::vector<std::vector<int>> expected = {{1,2,4}};
	std::cout << "expected: " << std::endl;
	print_vector(expected);
	Solution sol;

	std::vector<std::vector<int>> actual = sol.combinationSum3(k, n);
	std::cout << "actual: " << std::endl;
	print_vector(actual);

	BOOST_CHECK(expected == actual);
}

BOOST_AUTO_TEST_SUITE_END()
