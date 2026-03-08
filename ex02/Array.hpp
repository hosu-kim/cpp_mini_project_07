/*
This exercise is about using template on class.
*/

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <iostream>

template <typename T>
class Array {
	private:
		T*				_data;
		unsigned int	_size;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array& src);
		Array&	operator=(const Array& src);
		~Array();

		T&	operator[](unsigned int index);
		unsigned int size() const;
};

#endif