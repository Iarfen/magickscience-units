#ifndef MSCI_UNITS_COORDINATES_COORDINATES_2D_HPP_INCLUDED
#define MSCI_UNITS_COORDINATES_COORDINATES_2D_HPP_INCLUDED

#include "topology/point_2d.hpp"
#include "units/unit_basic.hpp"

#include <iostream>
#include <string>

using namespace std;

namespace msci
{
	class point_2d;
	
	class coordinates_2d
	{
		public:
			coordinates_2d();
			coordinates_2d(const length&,const length&);
			coordinates_2d(const length&,const msci::angle&);
			coordinates_2d(const point_2d&);
			coordinates_2d(const string&);

			void operator= (const point_2d&);

			length get_p() const;
			angle get_angle() const;

			void move_angle(const angle&);
			void move_in_direction(const length&,const angle&);

			length x;
			length y;
	};

	string to_string(const coordinates_2d&);
	length distance(const coordinates_2d&,const coordinates_2d&);
	
	inline float coordinates_2d_to_polar_r(float x,float y)
	{
		return std::sqrt(std::pow(x,2) + std::pow(y,2));
	}

	inline float coordinates_2d_to_polar_angle(float x,float y)
	{
		return msci::atan_grade(y/x);
	}

	inline float polar_to_coordinates_2d_x(float r,const angle& angle)
	{
		return r*msci::cos(angle);
	}

	inline float polar_to_coordinates_2d_y(float r,const angle& angle)
	{
		return r*msci::sin(angle);
	}
}

string operator +(const string&,const msci::coordinates_2d&);
string operator +(const msci::coordinates_2d&,const string&);

bool operator ==(const msci::coordinates_2d&,const msci::coordinates_2d&);
bool operator !=(const msci::coordinates_2d&,const msci::coordinates_2d&);

bool operator ==(const msci::coordinates_2d&,const msci::point_2d&);
bool operator !=(const msci::coordinates_2d&,const msci::point_2d&);
bool operator ==(const msci::point_2d&,const msci::coordinates_2d&);
bool operator !=(const msci::point_2d&,const msci::coordinates_2d&);

ostream& operator << (ostream&, const msci::coordinates_2d&);

#endif // MSCI_UNITS_COORDINATES_COORDINATES_2D_HPP_INCLUDED
