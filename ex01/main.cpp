#include "iter.hpp"

template <typename T>
void	printElement(const T& element) {
	std::cout << element << " ";
}

// not used with const arrays
void	increment(int& n) {
	n++;
}

int	main() {
	// 1. int array test
	int intArray[] = {1, 2, 3, 4, 5};
	std::cout << "Origianl int array: ";
	// function<typeName>: 함수의 매개변수 타입을 정해준다
	iter(intArray, 5, printElement<int>);
	std::cout << std::endl;

	// 2. value modification test
	iter(intArray, 5, increment);
	std::cout << "Incremented int array: ";
	// function<typeName>: 함수의 매개변수 타입을 정해준다
	iter(intArray, 5, printElement<int>);
	std::cout << std::endl;

	// doc => Think carefully about how to support both const
	//        and non-const elements in your iter function.
	// 3. string array test (const)
	const std::string	strArray[] = {"C++", "is", "awesome"};
	std::cout << "Const string array: ";
	// function<typeName>: 함수의 매개변수 타입을 정해준다
	iter(strArray, 3, printElement<std::string>);
	std::cout << std::endl;

	return 0;
}
