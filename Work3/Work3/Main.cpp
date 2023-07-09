#include <iostream>
#include "Triangle.h"
#include "Equilateral.h"
#include "Isosceles.h"
#include "Right.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Rhomb.h"
#include "Square.h"
#include "Parallelogram.h"




void triangle_show(Triangle* tr) {
	tr->print_triangle();
}
void quad_show(Quadrilateral& quad) {
	quad.print_quad();
}


int main() {
	setlocale(LC_ALL, "rus");
	Right tr_r;
	Equilateral tr_e;
	Isosceles tr_i;
	Rectangle rec;
	Rhomb rh;
	Square sq;
	Parallelogram par;
	triangle_show(&tr_r);
	triangle_show(&tr_e);
	triangle_show(&tr_i);
	quad_show(rh);
	quad_show(rec);
	quad_show(sq);
	quad_show(par);

	return 0;
}