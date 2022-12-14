#include "generate_id.hpp"

// Switch to random-number as the initial prefix for production code.
// short generate_id::prefix_(static_cast<short>(std::rand()));
short generate_id::prefix_{ 1 };
short const generate_id::max_counter_;

long generate_id::operator() ()
{
	if (counter_ == max_counter_)
	{
		counter_ = 0;
	}
	else
	{
		++counter_;
	}

	return static_cast<long>(prefix_) * (max_counter_ + 1) + counter_;
}
