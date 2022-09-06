#include <cmath>	// for sqrt and atan2

/// <summary>
/// Point Class
/// </summary>
struct point
{
	/// Distance to the origin.
	double distance()
	{
		return std::sqrt(x*x + y * y);
	}

	/// Angle relative to x-axis.
	double angle()
	{
		return std::atan2(y, x);
	}

	/// Add an offset to x and y.
	void offset(double off)
	{
		offset(off, off);
	}

	/// Add an offset to x and an offset to y
	void offset(double xoff, double yoff)
	{
		x = x + xoff;	// this-> is optional for member name
		y = y + yoff;
	}

	/// Scale x and y.
	void scale(double mult)
	{
		this->scale(mult, mult);	// this-> equals to (*this).
	}

	/// Scale x and y.
	void scale(double xmult, double ymult)
	{
		this->x = this->x * xmult;
		this->y = this->y * ymult;
	}

	point()
	: point(0.0, 0.0)
	{}

	point(double x, double y)
	: x{x}, y{y}
	{}

	point(point const& pt)
	: point{ pt.x, pt.y }
	{}

	double x;
  double y;
};
