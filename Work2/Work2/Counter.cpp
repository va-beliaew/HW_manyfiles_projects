#include "Counter.h"

void Counter::set_counter(int digit) {
	this->i = digit;
}
int Counter::get_back() {
	return i;
}
void Counter::get_sigh(char sigh) {
	if (sigh == '+') {
		up_counter();
	}
	else if (sigh == '-') {
		down_counter();
	}
}
void Counter::up_counter() {
	++i;
}
void Counter::down_counter() {
	--i;
}