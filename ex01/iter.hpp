/*
this exercise is about using the template on array and function.
*/

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T, typename F>
void	iter(T array[], const size_t len_of_array, F function) {
	if (array == NULL)
		return;
	for (size_t i = 0; i < len_of_array; i++) {
		function(array[i]);
	}
}

#endif