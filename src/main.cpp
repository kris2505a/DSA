#include <iostream>
#include "Searching and Sorting/Searching.h"

int main() {

	int n;
	std::cin >> n;
	std::vector <int> list(n);
	for (auto& element : list) {
		std::cin >> element;
	}
	int x;
	std::cin >> x;
	auto index = DSA::binarySearch(list, x);
	if (index == -1)
		std::cout << "Element not found" << std::endl;
	else
		std::cout << "Element found at index: " << index << std::endl;

}