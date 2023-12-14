#include <iostream>
using namespace std;
int main()
{
	int v, t, l,  s = 109;
	std::cin >> v >> t;
	l = v * t;
	std::cout << (l%s);
	return 0;
}