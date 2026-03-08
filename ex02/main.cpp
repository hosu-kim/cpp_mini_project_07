#include "Array.hpp"
#include "Array.tpp"
#include <string>

int	main() {
	// 1. empty array creatoin test
	std::cout << "--- 1. Empty Array Test ---" << std::endl;
	Array<int> empty;
	std::cout << "Size of empty: " << empty.size() << std::endl;

	// 2. 'n' elements creation and default initialization test
	std::cout << "\n--- 2. Int Array Initialization Test ---" << std::endl;
	unsigned int	n = 5;
	Array<int> numbers(n);
	std::cout << "Initial values: ";
	for (unsigned int i = 0; i < numbers.size(); i++) {
		std::cout << numbers[i] << ' ';
	}
	std::cout << std::endl;

	// 3. value modificaton and deep copy test
	std::cout << "\n--- 3. Deep Copy Test ---" << std::endl;
	for (unsigned int i = 0; i < numbers.size(); i++) {
		numbers[i] = (i + 1) * 10; // 10, 20, 30, 40, 50
	}

	Array<int> copy(numbers); // copy constructor call
	copy[0] = 999; // copy modification

	std::cout << "Original[0]: " << numbers[0] << " (Should be 10)" << std::endl;
	std::cout << "Copy[0]: " << copy[0] << " (Should be 999)" << std::endl;

	// 4. exception handling test
	std::cout << "\n--- 4. Exception Handling Test ---" << std::endl;
	try {
		std::cout << "Accessing index 10..." << std::endl;
		std::cout << numbers[10] << std::endl; // the array has five elements
	} catch (const std::exception& e) {
		// e.what(): 던진 스트링을 출력한다
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}

	// 5. string array test
	std::cout << "\n--- 5. String Array Test ---" << std::endl;
	Array<std::string> strings(3);
	strings[0] = "Hello";
	strings[1] = "C++";
	strings[2] = "Template";

	for (unsigned int i = 0; i < strings.size(); i++) {
		std::cout << strings[i] << ' ';
	}
	std::cout << std::endl;

	return 0;

}