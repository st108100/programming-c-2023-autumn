#include <iostream>
using namespace std;
int main()
{
	int n, k, m, p;
	std::cin >> n;
	k = 1;
	m = 0;
		for (int i = 1; i <= n; i++) {
			std::cout << k;
			m++;
			if (k == m) {
				k++;
				m = 0;
			}
		}

	return 0;
}

