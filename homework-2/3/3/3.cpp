#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	if (c * (-b / a) + d == 0 or a == 0 and b != 0) {
		std::cout << "No";
	}
	else if (-b / a != 0) {
		std::cout << -b / a;
	}
	else if (a == 0 and b == 0) {
		std::cout << "INF";
	}
	else {
		std::cout << 0;
	}
	return 0;
}