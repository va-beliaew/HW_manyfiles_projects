#include <iostream>
#include "func.h"
#include <Windows.h>


int main() {
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	float a, b;
	int k;
	std::cout << "������� ������ �����: ";
	std::cin >> a;
	std::cout << "������� ������ �����: ";
	std::cin >> b;
	do {
		std::cout << "�������� �������� (1 - ��������, 2 - ��������, 3 - ���������, 4 - �������, 5 - ���������� � �������): ";
		std::cin >> k;
	} while (k > 5 || k < 1);
	switch (k) {
		case 1: std::cout << a << " + " << b << " = " << add(a, b) << std::endl; break;
		case 2: std::cout << a << " - " << b << " = " << diff(a, b) << std::endl; break;
		case 3: std::cout << a << " * " << b << " = " << mult(a, b) << std::endl; break;
		case 4: std::cout << a << " / " << b << " = " << div(a, b) << std::endl; break;
		case 5: std::cout << a << " � ������� " << b << " = " << deg(a, b) << std::endl; break;
	}
	return 0;
}