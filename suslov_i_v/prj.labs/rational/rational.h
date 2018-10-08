#include <iostream>
#include <sstream>

class Rational
{
public:
	Rational() = default;
	explicit Rational(const int numerator);
	Rational(const int numarator, const int denominator);

	Rational& operator+=(const Rational& rhs);
	Rational& operator+=(const int numerator);

	Rational& operator-=(const Rational& rhs);
	Rational& operator-=(const int numerator);

	Rational& operator*=(const Rational& rhs);
	Rational& operator*=(const int numerator);
	Rational& operator/=(const Rational& rhs);
	Rational& operator/=(const int numerator);



	std::ostream& writeTo(std::ostream& ostrm) const;
	std::istream& readFrom(std::istream& istrm);


	int GCD(const Rational& rhs); 
	void normalize();
	
	bool operator==(const Rational& rhs);
	bool operator!=(const Rational& rhs);
	
	static const char leftBrace{ '{' };
	static const char separator{ '/' };
	static const char rightBrace{ '}' };

private:
	int num{ 0 };
	int den{ 1 };
};

int GCD1(int max, int min);


Rational operator-(const Rational& lhs, const Rational& rhs);
Rational operator*(const Rational& lhs, const Rational& rhs);
Rational operator/(const Rational& lhs, const Rational& rhs);
Rational operator+(const Rational& lhs, const Rational& rhs);