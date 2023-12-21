#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	for (int x = 0; x <= 1000; x++)
	if ((a * x * x * x + b * x * x + c * x + d) == 0) {
		std::cout << x;
		std::cout << " ";
	}
	else {
		std::cout << " ";
	}
	return 0;
}
