#include <cassert>
#include <iostream>

class rational
{
public:
	rational();
	rational(int num) : numerator_{num}, denominator_{1} {}
	rational(rational const&) = default;
	inline rational(int num, int den);

	int numerator() const { return numerator_; }
	int denominator() const { return denominator_; }

	void assign(int num, int den);
	rational& operator=(int num);

	// Some useful constants
	static const rational zero;
	static const rational one;
	static const rational pi;

	friend std::ostream& operator<<(std::ostream& out, rational const& r);

private:
	void reduce();

	int numerator_;
	int denominator_;
};


const rational rational::zero{ 0 };
const rational rational::one{ 1 };
const rational rational::pi{ 22,7 };

rational::rational() : rational{ 0, 1 } {}

inline rational::rational(int num, int den)
	: numerator_{num}, denominator_{den}
{
	reduce();
}

void rational::assign(int num, int den)
{
	numerator_ = num;
	denominator_ = den;
	reduce();
}

rational& rational::operator=(int num)
{
	numerator_ = num;
	denominator_ = 1;
	return *this;
}

int gcd(int numerator, int denominator)
{
	return rational::one.denominator();
}

std::ostream& operator<<(std::ostream& out, rational const& r)
{
	out << "Numerator: " << r.numerator() << ", Denominator: " << r.denominator() << std::endl;
	return out;
}

void rational::reduce()
{
	assert(denominator_ != 0);
	if (denominator_ < 0)
	{
		denominator_ = -denominator_;
		numerator_ = -numerator_;
	}

	int div{ gcd(numerator_, denominator_) };
	numerator_ = numerator_ / div;
	denominator_ = denominator_ / div;
}

int main()
{
	std::cout << "pi = " << rational::pi << std::endl;
}
