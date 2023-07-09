#pragma once
#include "Quadrilateral.h"

class Square : public Quadrilateral {
public:
	Square() : Quadrilateral(20, 20, 20, 20, 90, 90, 90, 90) {

	}
protected:
	void print_quad() override; 
};