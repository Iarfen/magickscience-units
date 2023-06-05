#ifndef MSCI_UNITS_TOPOLOGY_POINT_2D_HPP_INCLUDED
#define MSCI_UNITS_TOPOLOGY_POINT_2D_HPP_INCLUDED

#include "predefined_units/kinematics_units.hpp"
#include "units/unit_basic.hpp"

#include <string>

using namespace std;

namespace msci
{
	class coordinates_2d;

	class point_2d
	{
		public:
			point_2d();
			point_2d(const point_2d&);
			point_2d(point_2d&&);
			explicit point_2d(const length&,const length&);
			explicit point_2d(const length&,const angle&);
			explicit point_2d(const coordinates_2d&);
			explicit point_2d(string);

			point_2d& operator=(const point_2d&);
			point_2d& operator=(point_2d&&);
			point_2d& operator=(const coordinates_2d&);

			void set_position(const length&,const length&);
			void set_position(const length&,const angle&);

			void rotate(const angle&);
			void move(const displacement_2d&);
			void move(const length&,const length&);
			void move(const length&,const angle&);

			length distance_to_origin() const;

			length x;
			length y;
	};

	string to_string(const point_2d&);
	length distance(const point_2d&,const point_2d&);
}

bool operator ==(const msci::point_2d&,const msci::point_2d&);
bool operator !=(const msci::point_2d&,const msci::point_2d&);

bool operator ==(const msci::point_2d&, const string&);
bool operator !=(const msci::point_2d&, const string&);

bool operator ==(const string&, const msci::point_2d&);
bool operator !=(const string&, const msci::point_2d&);

void operator +=(string&, const msci::point_2d&);
string operator +(const string&,const msci::point_2d&);
string operator +(const msci::point_2d&,const string&);

ostream& operator <<(ostream&,const msci::point_2d&);
istream& operator >>(istream&, msci::point_2d&);

#endif // MSCI_UNITS_TOPOLOGY_POINT_2D_HPP_INCLUDED
