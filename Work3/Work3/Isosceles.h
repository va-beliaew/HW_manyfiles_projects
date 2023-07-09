#pragma once
#include "Triangle.h"

class Isosceles : public Triangle {
public:
	Isosceles() : Triangle(20, 30, 20, 40, 100, 40) {
	}
protected:
	void print_triangle() override;
};