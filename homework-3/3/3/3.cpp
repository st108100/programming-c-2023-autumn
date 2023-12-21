#include <iostream>
using namespace std;
int main()
{
	int x, c;
	std::cin >> x;
	c = 0;
	for (int i = 1; i <= x; i++) {
		if (x % i == 0) {
			c++;
		}
	}
	std::cout << c;
	return 0;
}