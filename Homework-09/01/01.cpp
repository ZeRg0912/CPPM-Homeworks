#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	double fractionResult() { return static_cast<double>(numerator_) / static_cast<double>(denominator_); }

	bool operator== (Fraction right) { return fractionResult() == right.fractionResult(); }

	bool operator!= (Fraction right) { return !(*this == right); }

	bool operator< (Fraction right) {
		if (fractionResult() < right.fractionResult()) {
			return true;
		}
		else if (fractionResult() < right.fractionResult()) {
			return true;
		}
		else {
			return false;
		}
	}

	bool operator> (Fraction right) { return right < *this; }
	bool operator>= (Fraction right) { return !(*this < right);	}
	bool operator<= (Fraction right) { return !(right <  * this); }
};

int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	system("cls");

	Fraction f1(4, 3);
	//Fraction f1(6, 11);
	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}