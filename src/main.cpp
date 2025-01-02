#include <iostream>
#include "Searching and Sorting/Searching.h"
#include "Searching and Sorting/Sorting.h"

int main() {

	int n;
	std::cin >> n;
	std::vector <int> list(n);
	for (auto& element : list) {
		std::cin >> element;
	}

	DSA::selectionSort(list);

	for (auto& i : list) {
		std::cout << i << " ";
	}
	std::cout << std::endl;	

}