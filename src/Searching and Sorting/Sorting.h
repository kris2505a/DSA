#pragma once
#include <vector>

namespace DSA {

	void selectionSort(std::vector <int>& list) {
		
		for (size_t i{ 0 }; i < list.size(); i++) 
			for (size_t j{ i + 1 }; j < list.size(); j++) 
				if (list.at(i) > list.at(j))
					std::swap(list.at(i), list.at(j));
	}


	void insertionSort(std::vector <int>& list) {

		for (size_t i{ 1 }; i < list.size(); i++) {
			int key = i;
			for (size_t j = i - 1; j >= 0 ; j--) {
				
			}
		}
	}

}