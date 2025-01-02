#pragma once
#include <vector>

namespace DSA {
	
	//Binary Search
	size_t binarySearch(std::vector <int>& list, int& element) {

		size_t first{ 0 }, last = { list.size() - 1 };

		while (first <= last) {
			
			size_t mid = (first + last) / 2;
			if (list.at(mid) == element)
				return mid; //found

			else if (element < list.at(mid))
				last = mid - 1;
			
			else if (element > list.at(mid)) 
				first = mid + 1;
		}
		return -1; //not found
	}


	//Linear Search
	size_t linearSearch(std::vector <int>& list, int& element) {

		for (size_t iter{ 0 }; iter < list.size(); iter++) {
			if (list.at(iter) == element)
				return iter; //found
		}
		return -1; //not found
	}
}