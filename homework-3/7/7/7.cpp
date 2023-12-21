#include <iostream>
using namespace std;
int main() {
	int n, k, p, c, m;
	std::cin >> n;
	c = 0;
	m = n / 2;
	for (int i = 1; i <= m; i++) {
		p = 2 * 2;
		c++;
	}
	std::cout << c;
	return 0;
}