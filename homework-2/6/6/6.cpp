#include <iostream>
using namespace std;
int main()
{
	int k, m, n, t;
	std::cin >> k >> m >> n;
	if (n <= k) {
		t = m * 2;
	}
	else if (n * 2 % k == 0) {
		t = m * (n * 2 / k);
	}
	else {
		t = m * (1 + (n * 2 / k));
	}
	std::cout << t;
	return 0;
}