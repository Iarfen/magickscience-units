#include "color.hpp"

using namespace std;

namespace informatics
{
	color::color(int new_red,int new_green,int new_blue,int new_alpha) : red(new_red),blue(new_blue),green(new_green),alpha(new_alpha)
	{
	}
}

wostream& operator <<(wostream& os, const informatics::color& x)
{
	return os << "color(" << x.get_red() << "," << x.get_green() << "," << x.get_blue() << "," << x.get_alpha() << ")";
}