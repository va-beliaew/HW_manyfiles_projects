#pragma once

class Counter {
	int i;
	char sight;
	void up_counter();
	void down_counter();
public:
	void set_counter(int digit);
	int get_back();
	void get_sigh(char sight);
};