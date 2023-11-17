#include <iostream>

using namespace std;

class Fraction
{
private:
	int numerator_;
	int denominator_;

	int NOD(int numerator, int denominator) {
		numerator = abs(numerator);
		denominator = abs(denominator);

		while (numerator > 0 && denominator > 0)
			if (numerator > denominator) numerator %= denominator;
			else denominator %= numerator;
		return numerator + denominator;
	}

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}
	Fraction() = default;

	void setFraction(void) {
		do {
			cout << "Введите числитель дроби: ";
			cin >> this->numerator_;
			if (cin.fail()) {
				cout << "Введите число!" << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			else {
				do {
					cout << "Введите знаменатель дроби: ";
					cin >> this->denominator_;
					if (cin.fail()) {
						cout << "Введите число!" << endl;
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
					}
					else { break; }
				} while (!isdigit(this->denominator_));
				break;
			}
		} while (!isdigit(this->numerator_));
		cout << endl;
	}

	void changeFraction(int newNum, int newDenom) {
		this->numerator_ = newNum;
		this->denominator_ = newDenom;
		cout << "Значение дроби: " << numerator_ << "/" << denominator_ << endl;
	}

	Fraction getFrac() {
		return Fraction(numerator_, denominator_);
	}

	bool operator== (Fraction right) { return NOD(numerator_, denominator_) == right.NOD(numerator_, denominator_); }

	bool operator!= (Fraction right) { return !(*this == right); }

	bool operator< (Fraction right) {
		if (NOD(numerator_, denominator_) < right.NOD(numerator_, denominator_)) {
			return true;
		}
		else if (NOD(numerator_, denominator_) < NOD(numerator_, denominator_)) {
			return true;
		}
		else {
			return false;
		}
	}

	bool operator> (Fraction right) { return right < *this; }
	bool operator>= (Fraction right) { return !(*this < right); }
	bool operator<= (Fraction right) { return !(right < *this); }

	Fraction operator+ (Fraction right) {
		int newNumerator = (numerator_ * right.denominator_) + (right.numerator_ * denominator_);
		int newDenominator = (denominator_ * right.denominator_);
		int NOD_ = NOD(newNumerator, newDenominator);
		newNumerator = newNumerator / NOD_;
		newDenominator = newDenominator / NOD_;
		return Fraction(newNumerator, newDenominator);
	}

	Fraction operator- (Fraction right) {
		int newNumerator = (numerator_ * right.denominator_) - (right.numerator_ * denominator_);
		int newDenominator = (denominator_ * right.denominator_);
		int NOD_ = NOD(newNumerator, newDenominator);
		newNumerator = newNumerator / NOD_;
		newDenominator = newDenominator / NOD_;
		return Fraction(newNumerator, newDenominator);
	}

	Fraction operator* (Fraction right) {
		int newNumerator = (numerator_ * right.numerator_);
		int newDenominator = (denominator_ * right.denominator_);
		int NOD_ = NOD(newNumerator, newDenominator);
		newNumerator = newNumerator / NOD_;
		newDenominator = newDenominator / NOD_;
		return Fraction(newNumerator, newDenominator);
	}

	Fraction operator/ (Fraction right) {
		int newNumerator = (numerator_ * right.denominator_);
		int newDenominator = (denominator_ * right.numerator_);
		int NOD_ = NOD(newNumerator, newDenominator);
		newNumerator = newNumerator / NOD_;
		newDenominator = newDenominator / NOD_;
		return Fraction(newNumerator, newDenominator);
	}

	Fraction operator! () {
		int newNumerator = numerator_ * (-1);
		int newDenominator = denominator_ * (-1);
		return Fraction(newNumerator, newDenominator);
	}

	Fraction operator++ () {
		numerator_ = numerator_ + denominator_;
		int NOD_ = NOD(numerator_, denominator_);
		numerator_ = numerator_ / NOD_;
		denominator_ = denominator_ / NOD_;
		return Fraction(numerator_, denominator_);
	}

	Fraction operator++ (int) {
		int NOD_ = NOD(numerator_, denominator_);
		numerator_ = numerator_ / NOD_;
		denominator_ = denominator_ / NOD_;
		int temp_numerator_ = numerator_;
		int temp_denominator = denominator_;
		numerator_ = numerator_ + denominator_;
		return Fraction(temp_numerator_, temp_denominator);
	}

	Fraction operator-- () {
		numerator_ = numerator_ - denominator_;
		int NOD_ = NOD(numerator_, denominator_);
		numerator_ = numerator_ / NOD_;
		denominator_ = denominator_ / NOD_;
		return Fraction(numerator_, denominator_);
	}

	Fraction operator-- (int) {
		int NOD_ = NOD(numerator_, denominator_);
		numerator_ = numerator_ / NOD_;
		denominator_ = denominator_ / NOD_;
		int temp_numerator_ = numerator_;
		int temp_denominator = denominator_;
		numerator_ = numerator_ - denominator_;
		return Fraction(temp_numerator_, temp_denominator);
	}

	friend ostream& operator<< (ostream& left, Fraction right);
};

ostream& operator<< (ostream& left, Fraction right) {
	if (right.denominator_ == 1) {
		left << right.denominator_;
	}
	left << right.numerator_ << "/" << right.denominator_;
	return left;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	system("cls");

	Fraction f1, f2;
	cout << "Введите первую дробь:\n";
	f1.setFraction();
	cout << "Введите вторую дробь:\n";
	f2.setFraction();
	
	cout << f1 << " + " << f2 << " = " << f1 + f2 << endl;
	cout << f1 << " - " << f2 << " = " << f1 - f2 << endl;
	cout << f1 << " * " << f2 << " = " << f1 * f2 << endl;
	cout << f1 << " / " << f2 << " = " << f1 / f2 << endl;
	cout << "--------------------------------------------" << endl;
	cout << "++" << f1 << " * " << f2 << " = ";
	cout << ++f1 * f2 << endl;
	cout << "Значение дроби 1 = " << f1.getFrac() << endl;
	cout << f1 << "--" << " * " << f2 << " = ";
	cout << f1-- * f2 << endl;
	cout << "Значение дроби 1 = " << f1.getFrac() << endl;
	cout << "--------------------------------------------" << endl;
	cout << "--" << f1 << " * " << f2 << " = ";
	cout << --f1 * f2 << endl;
	cout << "Значение дроби 1 = " << f1.getFrac() << endl;
	cout << f1 << "++" << " * " << f2 << " = ";
	cout << f1++ * f2 << endl;
	cout << "Значение дроби 1 = " << f1.getFrac() << endl;

	return 0;
}