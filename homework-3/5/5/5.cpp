#include <iostream>
using namespace std;
int main()
{
	int k, n, c;
	std::cin >> k;
	c = 0;
	for (int i = 1; i <= k; i++) {
		n = 0;
		while (i > 0) {
			n = n*10+i%10;
			i = i / 10;
		}
		if (n == i) {
			c++;
		}
	}
	std::cout << c;
	return 0;
}