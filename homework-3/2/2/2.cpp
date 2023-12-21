#include <iostream>
using namespace std;
int main()
{
	int x, c, k;
	std::cin >> x;
	while (x != 0) {
		c = x % 10;
		std::cout << c;
		x = x /10 ;
	}
	return 0;
}
