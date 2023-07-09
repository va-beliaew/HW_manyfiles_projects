#pragma once
#include "Quadrilateral.h"

class Parallelogram : public Quadrilateral {
public:
	Parallelogram() : Quadrilateral(10, 30, 10, 30, 50, 130, 50, 130) {

	}
protected:
	void print_quad() override;
};