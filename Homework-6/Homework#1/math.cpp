#include "math.h"

int sum(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
int mult(int x, int y) {
	return x * y;
}
int divide(int x, int y) {
	return x / y;
}

int power(int x, int y) {
	return x^y;
}

int choiseOperation(int choise, int x, int y) {
	switch (choise) {
	case 1:
		return sum(x, y);
		break;
	case 2:
		return sub(x, y);
		break;
	case 3:
		return mult(x, y);
		break;
	case 4:
		return divide(x, y);
		break;
	case 5:
		return power(x, y);
		break;
	default:
		break;
	}
}