#include "Array.hpp"

// 네임스페이스에 <T>를 붙이는 이유는 함수가 일반 클래스가 아니라
// 템플릿 클래스에 속해 있다는 것을 컴파일러에게 명시하기 위해서이다.
// defalt constructor
template <typename T>
Array<T>::Array() : _data(NULL), _size(0) {}

// parameterized constructor
template <typename T>
Array<T>::Array(unsigned int n): _size(n) {
	_data = new T[n]();
}

// copy constructor
template <typename T>
Array<T>::Array(const Array& src) : _size(src._size) {
	_data = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_data[i] = src._data[i];
};

// copy assignment operator
template <typename T>
Array<T>&	Array<T>::operator=(const Array& src) {
	if (this != &src) {
		delete[] _data;
		_size = src._size;
		_data = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_data[i] = src._data[i];
	}
	return *this;
}

// destructor
template <typename T>
Array<T>::~Array() {
	delete[] _data;
}

// C++에서는 언어 차원에서 기본적으로 인덱스 초과 접근을 막지 않기 때문에,
// 수동 범위 검사가 필요
// In C++, manual bounds checking is required because
// it doesn't prevent out-out-bounds access by default;
// 클래스 외부에서 적용됨.
template <typename T>
T&	Array<T>::operator[](unsigned int index) {
	if (index >= _size)
		throw std::out_of_range("Index out of bounds");
	return _data[index];
}

template <typename T>
unsigned int Array<T>::size() const {
	return _size;
}
