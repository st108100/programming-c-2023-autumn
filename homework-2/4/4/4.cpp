﻿#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, e, n;
	std::cin >> n;
	a = n / 60; //кол-во билетов на 60 + к поездок 
	b = (n % 60) / 20; //кол-во билетов на 20 + к -- 60 поездок
	c = ((n % 60) % 20) / 10; //на 10 + к -- 20
	d = (((n % 60) % 20) % 10) / 5;// 5 + к -- 10
	e = n % 5;//к -- 5
	if (e * 15 > 70) {
		e = 0;
		d += 1;

	}
	if (e * 15 + d * 70 > 125) {
		e = 0;
		d = 0;
		c += 1;
	}
	if (e * 15 + d * 70 + c * 125 > 230) {
		e = 0;
		d = 0;
		c = 0;
		b += 1;
	}
	if (e * 15 + d * 70 + c * 125 + b * 230 > 440) {
		e = 0;
		d = 0;
		c = 0;
		b = 0;
		a += 1;
	}
std:cout << a << " " << b << " " << c << " " << d << " " << e;
	return 0;
}