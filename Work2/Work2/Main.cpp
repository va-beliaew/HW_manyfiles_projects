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
		std::cout << "Вы хотите указать начальное значение счетчика? Введите да или нет: ";
		std::cin >> answer;
		if (answer == "Да" || answer == "да") {
			std::cout << "Введите начальное значение счетчика: ";
			std::cin >> digit;
			count.set_counter(digit);
			break;
		}
		else if (answer == "Нет" || answer == "нет") {
			count.set_counter(1);
			break;
		}
		else {
			continue;
		}
	}
	while (1) {
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> sigh;
		if (sigh == 'x' || sigh == 'X' || sigh == 'х' || sigh == 'Х') {
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
	std::cout << "До свидания!";
	return 0;
}