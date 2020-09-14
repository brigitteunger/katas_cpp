#define BOOST_TEST_MAIN
#include <boost/test/included/unit_test.hpp>
#include <iostream>

#include "auxiliary_functions.h"
#include "insert_interval.h"


BOOST_AUTO_TEST_SUITE(insert_intervals)

BOOST_AUTO_TEST_CASE(test_1) {
	std::vector<std::vector<int>> intervals = { {1,3},{6,9} };
	std::vector<int> newInterval = { 2,5 };
	std::vector<std::vector<int>> expected = { {1,5},{6,9} };
	//std::cout << "expected: " << std::endl;
	//print_vector(expected);
	Solution sol;

	std::vector<std::vector<int>> actual = sol.insert(intervals, newInterval);
	//std::cout << "actual: " << std::endl;
	//print_vector(actual);

	BOOST_CHECK(expected == actual);
}

BOOST_AUTO_TEST_CASE(test_2) {
	std::vector<std::vector<int>> intervals = { {1, 2},{3, 5},{6, 7},{8, 10},{12, 16} };
	std::vector<int> newInterval = { 4,8 };
	std::vector<std::vector<int>> expected = { {1, 2},{3, 10},{12, 16} };
	//std::cout << "expected: " << std::endl;
	//print_vector(expected);
	Solution sol;

	std::vector<std::vector<int>> actual = sol.insert(intervals, newInterval);
	//std::cout << "actual: " << std::endl;
	//print_vector(actual);

	BOOST_CHECK(expected == actual);
}

BOOST_AUTO_TEST_CASE(test_3) {
	std::vector<std::vector<int>> intervals = { {2,3},{6,9} };
	std::vector<int> newInterval = { 0,1 };
	std::vector<std::vector<int>> expected = { {0,1},{2,3},{6,9} };
	//std::cout << "expected: " << std::endl;
	//print_vector(expected);
	Solution sol;

	std::vector<std::vector<int>> actual = sol.insert(intervals, newInterval);
	//std::cout << "actual: " << std::endl;
	//print_vector(actual);

	BOOST_CHECK(expected == actual);
}

BOOST_AUTO_TEST_CASE(test_4) {
	std::vector<std::vector<int>> intervals = { {2,3},{6,9} };
	std::vector<int> newInterval = { 10,11 };
	std::vector<std::vector<int>> expected = { {2,3},{6,9},{10,11}};
	//std::cout << "expected: " << std::endl;
	//print_vector(expected);
	Solution sol;

	std::vector<std::vector<int>> actual = sol.insert(intervals, newInterval);
	//std::cout << "actual: " << std::endl;
	//print_vector(actual);

	BOOST_CHECK(expected == actual);
}

BOOST_AUTO_TEST_CASE(test_5) {
	std::vector<std::vector<int>> intervals = { };
	std::vector<int> newInterval = { 1,2 };
	std::vector<std::vector<int>> expected = { {1,2} };
	//std::cout << "expected: " << std::endl;
	//print_vector(expected);
	Solution sol;

	std::vector<std::vector<int>> actual = sol.insert(intervals, newInterval);
	//std::cout << "actual: " << std::endl;
	//print_vector(actual);

	BOOST_CHECK(expected == actual);
}

BOOST_AUTO_TEST_CASE(test_6) {
	std::vector<std::vector<int>> intervals = { {0, 2},{3, 5},{6, 7},{8, 10},{12, 16} };
	std::vector<int> newInterval = { 1,18 };
	std::vector<std::vector<int>> expected = { {0,18} };
	//std::cout << "expected: " << std::endl;
	//print_vector(expected);
	Solution sol;

	std::vector<std::vector<int>> actual = sol.insert(intervals, newInterval);
	//std::cout << "actual: " << std::endl;
	//print_vector(actual);

	BOOST_CHECK(expected == actual);
}

BOOST_AUTO_TEST_CASE(test_7) {
	std::vector<std::vector<int>> intervals = { {1, 2},{3, 5},{6, 7},{8, 10},{12, 16} };
	std::vector<int> newInterval = { 0,5 };
	std::vector<std::vector<int>> expected = { {0, 5},{6, 7},{8, 10},{12, 16} };
	//std::cout << "expected: " << std::endl;
	//print_vector(expected);
	Solution sol;

	std::vector<std::vector<int>> actual = sol.insert(intervals, newInterval);
	//std::cout << "actual: " << std::endl;
	//print_vector(actual);

	BOOST_CHECK(expected == actual);
}

BOOST_AUTO_TEST_CASE(test_8) {
	std::vector<std::vector<int>> intervals;
	for (int i = 0; i < 20001; i += 2) {
		intervals.push_back({ i,i + 1 });
	}
	std::vector<int> newInterval = { 0,20001 };
	std::vector<std::vector<int>> expected = {{ 0,20001 }};
	//std::cout << "expected: " << std::endl;
	//print_vector(expected);
	Solution sol;

	std::vector<std::vector<int>> actual = sol.insert(intervals, newInterval);
	//std::cout << "actual: " << std::endl;
	//print_vector(actual);

	BOOST_CHECK(expected == actual);
}

BOOST_AUTO_TEST_SUITE_END()
