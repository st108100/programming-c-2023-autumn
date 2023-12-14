#include <iostream>
using namespace std;
int main()
{
	int n, k, m;
	std::cin >> n;
	k = 1;
	m = 1;
	for (1; n + 1; 1) {
		std::cout << k;
		m += 1;
		if (m > k) {
			k++;
			m = 1;
		}
	}
	return 0;
}

