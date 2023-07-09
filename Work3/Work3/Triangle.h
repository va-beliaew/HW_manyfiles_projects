#pragma once


class Triangle {
	int a = 0;
	int b = 0;
	int c = 0;
	int A = 0;
	int B = 0;
	int C = 0;
protected:
	Triangle(int a, int b, int c, int A, int B, int C) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
	}
public:
	virtual void print_triangle();
protected:
	void print_triangle_param();
};