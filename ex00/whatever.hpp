/*
This exercise is about learning the `template <typename T> keyword`
*/

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

// `template <typename T>`: 데이터 타입을 정해두지 않은 붕어빵 틀을 만드는 과정
// 1. `template`: 지금부터 내가 쓸 코드는 일반적인 함수가 아니라, 컴파일러가 참고할 설계도야.
// 2. `< >`: 템플릿에서 사용할 타입을 정의해줘.
// 3. `typename T`: 다음에 올 `T`는 어떤 데이터 타입의 이름표야
// 4. `T`: 너가 만든 가짜 타입의 이름이야
template <typename T>
void	swap(T &a, T &b) {
	T	temp = a;
	a = b;
	b = temp;
}

// template<typename T>를 사용하면 모든 타입에 대해 함수를 일일히 다 정의할 필요가 없다.
template <typename T>
const T	min(T &a, T &b) {
	return (a < b) ? a : b;
}

template <typename T>
const T	max(T &a, T &b) {
	return (a > b) ? a : b;
}

#endif