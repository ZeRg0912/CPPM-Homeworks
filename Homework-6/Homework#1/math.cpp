#include "math.h"

float sum(float x, float y) {
	return x + y;
}
float sub(float x, float y) {
	return x - y;
}
float mult(float x, float y) {
	return x * y;
}
float divide(float x, float y) {
	return x / y;
}

float power(float x, float y) {
	float a = 1;
	for (float i = y; i > 0; i--) {
		a = a * x;
	}
	return a;
}