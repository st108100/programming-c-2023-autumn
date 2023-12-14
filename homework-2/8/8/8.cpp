#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	if (a >= b and b >= c) {
		std::cout << a << " " << b << " " << c;
	}
	else if (a >= c and c >= b) {
		std::cout << a << " " << c << " " << b;
	}
	else if (b >= c and c >= a) {
		std::cout << b << " " << c << " " << a;
	}
	else if (b >= a and a>= c) {
		std::cout << b << " " << a << " " << c;
	}
	else if (c >= b and b >= a) {
		std::cout << c << " " << b << " " << a;
	}
	else {
		std::cout << c << " " << a << " " << b;
	}
	return 0;
}