#include <iostream>
#include <Windows.h>
#include "Counter.h"


int main() {
	SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "rus");
	Counter count;
	std::string answer;
	char sigh = 1;
	int digit;
	while (1) {
		std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
		std::cin >> answer;
		if (answer == "��" || answer == "��") {
			std::cout << "������� ��������� �������� ��������: ";
			std::cin >> digit;
			count.set_counter(digit);
			break;
		}
		else if (answer == "���" || answer == "���") {
			count.set_counter(1);
			break;
		}
		else {
			continue;
		}
	}
	while (1) {
		std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
		std::cin >> sigh;
		if (sigh == 'x' || sigh == 'X' || sigh == '�' || sigh == '�') {
			break;
		}
		else if (sigh == '+' || sigh == '-') {
			count.get_sigh(sigh);
		}
		else if (sigh == '=') {
			std::cout << count.get_back() << std::endl;
		}
		else {
			continue;
		}
	}
	std::cout << "�� ��������!";
	return 0;
}