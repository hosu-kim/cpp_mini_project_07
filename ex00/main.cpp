#include "whatever.hpp"
#include <string>
#include <iostream>

int main( void ) {
	int a = 2;
	int b = 3;
	
	// ::swap: 전역 네임스페이스에 있는 swap 함수를 쓰겠다
	//         표준 라이브러리와의 충돌을 방지하고, 내가 만든 함수를 호출하기 위해서
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	return 0;
}
