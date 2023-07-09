#pragma once
#include "Triangle.h"

class Equilateral : public Triangle {
public:
	Equilateral() : Triangle(30, 30, 30, 60, 60, 60) {
	}
protected:
	void print_triangle() override;
};