#pragma once
#include "Quadrilateral.h"

class Rectangle : public Quadrilateral {
public:
	Rectangle() : Quadrilateral(20, 40, 20, 40, 90, 90, 90, 90) {

	}
protected:
	void print_quad() override;
};