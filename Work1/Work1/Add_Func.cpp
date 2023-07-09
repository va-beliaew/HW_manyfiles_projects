#include "func.h"
#include <cmath>

float mult(float a, float b) {
	return a * b;
}
float add(float a, float b) {
	return a + b;
}
float diff(float a, float b) {
	return a - b;
}
float div(float a, float b) {
	return a / b;
}
float deg(float a, float b) {
	return std::pow(a, b);
}