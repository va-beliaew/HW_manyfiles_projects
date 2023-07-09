#include <iostream>
#include "func.h"
#include <Windows.h>


int main() {
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	float a, b;
	int k;
	std::cout << "¬ведите первое число: ";
	std::cin >> a;
	std::cout << "¬ведите второе число: ";
	std::cin >> b;
	do {
		std::cout << "¬ыберите операцию (1 - сложение, 2 - вычитане, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
		std::cin >> k;
	} while (k > 5 || k < 1);
	switch (k) {
		case 1: std::cout << a << " + " << b << " = " << add(a, b) << std::endl; break;
		case 2: std::cout << a << " - " << b << " = " << diff(a, b) << std::endl; break;
		case 3: std::cout << a << " * " << b << " = " << mult(a, b) << std::endl; break;
		case 4: std::cout << a << " / " << b << " = " << div(a, b) << std::endl; break;
		case 5: std::cout << a << " в степени " << b << " = " << deg(a, b) << std::endl; break;
	}
	return 0;
}