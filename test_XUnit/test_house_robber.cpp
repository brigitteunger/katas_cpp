#define BOOST_TEST_MAIN
#include <boost/test/included/unit_test.hpp>
#include <iostream>

#include "auxiliary_functions.h"
#include "house_robber.h"


BOOST_AUTO_TEST_SUITE(insert_intervals)

BOOST_AUTO_TEST_CASE(test_1) {
	std::vector<int> nums = { 1,2,3,1 };
	Solution sol;

	int haul = sol.rob(nums);
	
	BOOST_TEST(4 == haul);
}

BOOST_AUTO_TEST_CASE(test_2) {
	std::vector<int> nums = { 2,7,9,3,1 };
	Solution sol;

	int haul = sol.rob(nums);
	
	BOOST_TEST(12 == haul);
}

BOOST_AUTO_TEST_CASE(test_3) {
	std::vector<int> nums = { };
	Solution sol;

	int haul = sol.rob(nums);
	
	BOOST_TEST(0 == haul);
}

BOOST_AUTO_TEST_CASE(test_4) {
	std::vector<int> nums = { 2,1,1,3,1,7 };
	Solution sol;

	int haul = sol.rob(nums);
	
	BOOST_TEST(12 == haul);
}

BOOST_AUTO_TEST_SUITE_END()
