#ifndef MSCI_UNITS_COORDINATES_COORDINATES_3D_HPP_INCLUDED
#define MSCI_UNITS_COORDINATES_COORDINATES_3D_HPP_INCLUDED

#include "topology/point_3d.hpp"
#include "meca_number/angle.hpp"

#include "units/unit_basic.hpp"
#include "predefined_units/kinematics_units.hpp"

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

namespace msci
{
	enum class coordinates : char {CARTESIAN, CYLINDRICAL, SPHERICAL, GEOGRAPHICAL, POLAR};

	template<typename T>
	class coordinates_3d
	{
		public:
			coordinates_3d<T>() : x(),y(),z()
			{}

			coordinates_3d<T>(const coordinates_3d<T>& x_coordinates) : x(x_coordinates.x),y(x_coordinates.y),z(x_coordinates.z)
			{}

			coordinates_3d<T>(coordinates_3d<T>&& x_coordinates) : x(std::move(x_coordinates.x)),y(std::move(x_coordinates.y)),z(std::move(x_coordinates.z))
			{}

			explicit coordinates_3d<T>(const T& new_x,const T& new_y,const T& new_z) : x(new_x),y(new_y),z(new_z)
			{}

			explicit coordinates_3d<T>(const T& new_p,const angle& new_theta,T new_z)
			{
				set_position(new_p,new_theta,new_z);
			}

			explicit coordinates_3d<T>(const T& new_r,const angle& new_theta,const angle& new_phi)
			{
				set_position(new_r,new_theta,new_phi);
			}

			explicit coordinates_3d<T>(const angle& new_latitude,const angle& new_longitude,const T& new_altitude) : coordinates_3d()
			{
				set_position(new_latitude,new_longitude,new_altitude);
			}

			explicit coordinates_3d<T>(const point_3d<T>& x_point) : x(x_point.x),y(x_point.y),z(x_point.z)
			{}

			explicit coordinates_3d<T>(string init_coordinates_3d) : coordinates_3d()
			{
				vector<string> values;
				if (init_coordinates_3d.front() == '(')
				{
					init_coordinates_3d.erase(0,1);
				}
				if (init_coordinates_3d.back() == ')')
				{
					init_coordinates_3d.erase(init_coordinates_3d.size()-1,1);
				}
				boost::split(values,init_coordinates_3d,boost::is_any_of(","));
				if (values.size() == 3)
				{
					if (is_angle(values[0]))
					{
						if (is_angle(values[1]))
						{
							if (!is_angle(values[2]))
							{
								set_position(angle(values[0]),angle(values[1]),T(values[2]));
							}
						}
					}
					else
					{
						if (is_angle(values[1]))
						{
							if (is_angle(values[2]))
							{
								set_position(T(values[0]),angle(values[1]),angle(values[2]));
							}
							else
							{
								set_position(T(values[0]),angle(values[1]),T(values[2]));
							}
						}
						else
						{
							if (!is_angle(values[2]))
							{
								set_position(T(values[0]),T(values[1]),T(values[2]));
							}
						}
					}
				}
			}

			coordinates_3d<T>& operator=(const coordinates_3d<T>& x_coordinates)
			{
				x = x_coordinates.x;
				y = x_coordinates.y;
				z = x_coordinates.z;
				return *this;
			}

			coordinates_3d<T>& operator=(coordinates_3d<T>&& x_coordinates)
			{
				x = std::move(x_coordinates.x);
				y = std::move(x_coordinates.y);
				z = std::move(x_coordinates.z);
				return *this;
			}

			coordinates_3d<T>& operator=(const point_3d<T>& x_point)
			{
				x = x_point.x;
				y = x_point.y;
				z = x_point.z;
				return *this;
			}

			T get_p() const
			{
				return msci::sqrt(msci::pow(x,2) + msci::pow(y,2));
			}

			angle get_theta() const
			{
				return msci::atan(float(y/x));
			}

			T get_r() const
			{
				return msci::sqrt(msci::pow(x,2) + msci::pow(y,2) + msci::pow(z,2));
			}

			angle get_phi() const
			{
				return angle(msci::acos_grade(float(z/msci::sqrt(msci::pow(x,2) + msci::pow(y,2) + msci::pow(z,2)))));
			}

			angle get_latitude() const
			{
				return msci::asin(float(z/T(6317,"km")));
			}

			angle get_longitude() const
			{
				return msci::atan(float(y/x));
			}

			T get_altitude() const
			{
				return T();
			}

			void set_position(const T& new_x,const T& new_y,const T& new_z)
			{
				x = new_x;
				y = new_y;
				z = new_z;
			}

			void set_position(const T& new_p,const angle& new_theta,T new_z)
			{
				new_z.set_same_prefix(new_p);
				x = T(new_p * msci::cos(new_theta));
				y = T(new_p * msci::sin(new_theta));
				z = new_z;
			}

			void set_position(const T& new_r,const angle& new_theta,const angle& new_phi)
			{
				x = T(new_r * msci::cos(new_theta) * msci::sin(new_phi));
				y = T(new_r * msci::sin(new_theta) * msci::sin(new_phi));
				z = T(new_r * msci::cos(new_phi));
			}

			void set_position(const angle& new_latitude,const angle& new_longitude,const T& new_altitude)
			{
				x = T(new_altitude * msci::cos(new_latitude) * msci::cos(new_longitude));
				y = T(new_altitude * msci::cos(new_latitude) * msci::sin(new_longitude));
				z = T(new_altitude * msci::sin(new_latitude));
			}

			void rotate_in_x(const angle& x_angle)
			{
				T y_coord = y;
				T z_coord = z;
				y = y_coord * msci::cos(x_angle) - z_coord * msci::sin(x_angle);
				z = y_coord * msci::sin(x_angle) + z_coord * msci::cos(x_angle);
			}

			void rotate_in_y(const angle& x_angle)
			{
				T x_coord = x;
				T z_coord = z;
				x = x_coord * msci::cos(x_angle) - z_coord * msci::sin(x_angle);
				z = x_coord * msci::sin(x_angle) + z_coord * msci::cos(x_angle);
			}

			void rotate_in_z(const angle& x_angle)
			{
				T x_coord = x;
				T y_coord = y;
				x = x_coord * msci::cos(x_angle) - y_coord * msci::sin(x_angle);
				y = x_coord * msci::sin(x_angle) + y_coord * msci::cos(x_angle);
			}

			void move(const displacement_3d& x_displacement)
			{
				x += x_displacement.x_projection();
				y += x_displacement.y_projection();
				z += x_displacement.z_projection();
			}

			void move(const T& new_x,const T& new_y,const T& new_z)
			{
				x += new_x;
				y += new_y;
				z += new_z;
			}

			void move(const T& new_p,const angle& new_theta,T new_z)
			{
				new_z.set_same_prefix(new_p);
				x += T(new_p * msci::cos(new_theta));
				y += T(new_p * msci::sin(new_theta));
				z += new_z;
			}

			void move(const T& new_r,const angle& new_theta,const angle& new_phi)
			{
				x += T(new_r * msci::cos(new_theta) * msci::sin(new_phi));
				y += T(new_r * msci::sin(new_theta) * msci::sin(new_phi));
				z += T(new_r * msci::cos(new_phi));
			}

			T distance_to_origin() const
			{
				return msci::sqrt(msci::pow(x,2) + msci::pow(y,2) + msci::pow(z,2));
			}

			string display_cylindrical() const
			{
				ostringstream out;
				out << "(" << get_p() << "," << get_theta() << "," << z << ")";
				return out.str();
			}

			string display_spherical() const
			{
				ostringstream out;
				out << "(" << get_r() << "," << get_theta() << "," << get_phi() << ")";
				return out.str();
			}

			string display_geographical() const
			{
				ostringstream out;
				out << "(" << get_latitude() << "," << get_longitude() << "," << get_altitude() << ")";
				return out.str();
			}

			T x;
			T y;
			T z;
	};

	template<>
	class coordinates_3d<float>
	{
		public:
			coordinates_3d<float>() : x(),y(),z()
			{}

			coordinates_3d<float>(const coordinates_3d<float>& x_coordinates) : x(x_coordinates.x),y(x_coordinates.y),z(x_coordinates.z)
			{}

			coordinates_3d<float>(coordinates_3d<float>&& x_coordinates) : x(std::move(x_coordinates.x)),y(std::move(x_coordinates.y)),z(std::move(x_coordinates.z))
			{}

			explicit coordinates_3d<float>(const float& new_x,const float& new_y,const float& new_z) : x(new_x),y(new_y),z(new_z)
			{}

			explicit coordinates_3d<float>(const float& new_p,const angle& new_theta,const float& new_z)
			{
				set_position(new_p,new_theta,new_z);
			}

			explicit coordinates_3d<float>(const float& new_r,const angle& new_theta,const angle& new_phi)
			{
				set_position(new_r,new_theta,new_phi);
			}

			explicit coordinates_3d<float>(const angle& new_latitude,const angle& new_longitude,const float& new_altitude) : coordinates_3d()
			{
				set_position(new_latitude,new_longitude,new_altitude);
			}

			explicit coordinates_3d<float>(const point_3d<float>& x_point) : x(x_point.x),y(x_point.y),z(x_point.z)
			{}

			explicit coordinates_3d<float>(string init_coordinates_3d) : coordinates_3d<float>()
			{
				vector<string> values;
				if (init_coordinates_3d.front() == '(')
				{
					init_coordinates_3d.erase(0,1);
				}
				if (init_coordinates_3d.back() == ')')
				{
					init_coordinates_3d.erase(init_coordinates_3d.size()-1,1);
				}
				boost::split(values,init_coordinates_3d,boost::is_any_of(","));
				if (values.size() == 3)
				{
					if (is_angle(values[0]))
					{
						if (is_angle(values[1]))
						{
							if (!is_angle(values[2]))
							{
								set_position(angle(values[0]),angle(values[1]),stof(values[2]));
							}
						}
					}
					else
					{
						if (is_angle(values[1]))
						{
							if (is_angle(values[2]))
							{
								set_position(stof(values[0]),angle(values[1]),angle(values[2]));
							}
							else
							{
								set_position(stof(values[0]),angle(values[1]),stof(values[2]));
							}
						}
						else
						{
							if (!is_angle(values[2]))
							{
								set_position(stof(values[0]),stof(values[1]),stof(values[2]));
							}
						}
					}
				}
			}

			coordinates_3d<float>& operator=(const coordinates_3d<float>& x_coordinates)
			{
				x = x_coordinates.x;
				y = x_coordinates.y;
				z = x_coordinates.z;
				return *this;
			}

			coordinates_3d<float>& operator=(coordinates_3d<float>&& x_coordinates)
			{
				x = std::move(x_coordinates.x);
				y = std::move(x_coordinates.y);
				z = std::move(x_coordinates.z);
				return *this;
			}

			coordinates_3d<float>& operator=(const point_3d<float>& x_point)
			{
				x = x_point.x;
				y = x_point.y;
				z = x_point.z;
				return *this;
			}

			float get_p() const
			{
				return std::sqrt(std::pow(x,2) + std::pow(y,2));
			}

			angle get_theta() const
			{
				return msci::atan(float(y/x));
			}

			float get_r() const
			{
				return std::sqrt(std::pow(x,2) + std::pow(y,2) + std::pow(z,2));
			}

			angle get_phi() const
			{
				return angle(msci::acos_grade(float(z/std::sqrt(std::pow(x,2) + std::pow(y,2) + std::pow(z,2)))));
			}

			angle get_latitude() const
			{
				return msci::asin(z/6317);
			}

			angle get_longitude() const
			{
				return msci::atan(float(y/x));
			}

			float get_altitude() const
			{
				return float();
			}

			void set_position(const float& new_x,const float& new_y,const float& new_z)
			{
				x = new_x;
				y = new_y;
				z = new_z;
			}

			void set_position(const float& new_p,const angle& new_theta,const float& new_z)
			{
				x = new_p * msci::cos(new_theta);
				y = new_p * msci::sin(new_theta);
				z = new_z;
			}

			void set_position(const float& new_r,const angle& new_theta,const angle& new_phi)
			{
				x = new_r * msci::cos(new_theta) * msci::sin(new_phi);
				y = new_r * msci::sin(new_theta) * msci::sin(new_phi);
				z = new_r * msci::cos(new_phi);
			}

			void set_position(const angle& new_latitude,const angle& new_longitude,const float& new_altitude)
			{
				x = new_altitude * msci::cos(new_latitude) * msci::cos(new_longitude);
				y = new_altitude * msci::cos(new_latitude) * msci::sin(new_longitude);
				z = new_altitude * msci::sin(new_latitude);
			}

			void rotate_in_x(const angle& x_angle)
			{
				float y_coord = y;
				float z_coord = z;
				y = y_coord * msci::cos(x_angle) - z_coord * msci::sin(x_angle);
				z = y_coord * msci::sin(x_angle) + z_coord * msci::cos(x_angle);
			}

			void rotate_in_y(const angle& x_angle)
			{
				float x_coord = x;
				float z_coord = z;
				x = x_coord * msci::cos(x_angle) - z_coord * msci::sin(x_angle);
				z = x_coord * msci::sin(x_angle) + z_coord * msci::cos(x_angle);
			}

			void rotate_in_z(const angle& x_angle)
			{
				float x_coord = x;
				float y_coord = y;
				x = x_coord * msci::cos(x_angle) - y_coord * msci::sin(x_angle);
				y = x_coord * msci::sin(x_angle) + y_coord * msci::cos(x_angle);
			}

			void move(const displacement_3d& x_displacement)
			{
				x += float(x_displacement.x_projection());
				y += float(x_displacement.y_projection());
				z += float(x_displacement.z_projection());
			}

			void move(const float& new_x,const float& new_y,const float& new_z)
			{
				x += new_x;
				y += new_y;
				z += new_z;
			}

			void move(const float& new_p,const angle& new_theta,const float& new_z)
			{
				x += new_p * msci::cos(new_theta);
				y += new_p * msci::sin(new_theta);
				z += new_z;
			}

			void move(const float& new_r,const angle& new_theta,const angle& new_phi)
			{
				x += new_r * msci::cos(new_theta) * msci::sin(new_phi);
				y += new_r * msci::sin(new_theta) * msci::sin(new_phi);
				z += new_r * msci::cos(new_phi);
			}

			float distance_to_origin() const
			{
				return std::sqrt(std::pow(x,2) + std::pow(y,2) + std::pow(z,2));
			}

			string display_cylindrical() const
			{
				ostringstream out;
				out << "(" << get_p() << "," << get_theta() << "," << z << ")";
				return out.str();
			}

			string display_spherical() const
			{
				ostringstream out;
				out << "(" << get_r() << "," << get_theta() << "," << get_phi() << ")";
				return out.str();
			}

			string display_geographical() const
			{
				ostringstream out;
				out << "(" << get_latitude() << "," << get_longitude() << "," << get_altitude() << ")";
				return out.str();
			}

			float x;
			float y;
			float z;
	};

	template<typename T>
	string to_string(const coordinates_3d<T>& x)
	{
		ostringstream out;
		out << "(" << x.x << "," << x.y << "," << x.z << ")";
		return out.str();
	}

	template<typename T>
	T distance(const coordinates_3d<T>& x,const coordinates_3d<T>& y)
	{
		return msci::sqrt(msci::pow(x.x - y.x,2) + msci::pow(x.y - y.y,2) + msci::pow(x.z - y.z,2));
	}

	template<typename T>
	T distance(const coordinates_3d<T>& x,const point_3d<T>& y)
	{
		return msci::sqrt(msci::pow(x.x - y.x,2) + msci::pow(x.y - y.y,2) + msci::pow(x.z - y.z,2));
	}

	template<typename T>
	T distance(const point_3d<T>& x,const coordinates_3d<T>& y)
	{
		return msci::sqrt(msci::pow(x.x - y.x,2) + msci::pow(x.y - y.y,2) + msci::pow(x.z - y.z,2));
	}

	inline float cartesian_3d_to_cylindrical_r(float x,float y,float z)
	{
		return std::sqrt(std::pow(x,2) + std::pow(y,2));
	}

	inline float cartesian_3d_to_cylindrical_theta(float x,float y,float z)
	{
		return std::atan(y/x);
	}

	inline float cartesian_3d_to_cylindrical_z(float x,float y,float z)
	{
		return z;
	}

	inline float cartesian_3d_to_spherical_r(float x,float y,float z)
	{
		return std::sqrt(std::pow(x,2) + std::pow(y,2) + std::pow(z,2));
	}

	inline float cartesian_3d_to_spherical_theta(float x,float y,float z)
	{
		return std::atan(y/x);
	}

	inline float cartesian_3d_to_spherical_phi(float x,float y,float z)
	{
		return std::acos(z/std::sqrt(std::pow(x,2) + std::pow(y,2) + std::pow(z,2)));
	}

	inline float spherical_to_cartesian_3d_x(float r,const angle& angle1, const angle& angle2)
	{
		return r * msci::cos(angle1) * msci::sin(angle2);
	}

	inline float spherical_to_cartesian_3d_y(float r,const angle& angle1, const angle& angle2)
	{
		return r * msci::sin(angle1) * msci::sin(angle2);
	}

	inline float spherical_to_cartesian_3d_z(float r,const angle& angle1, const angle& angle2)
	{
		return r * msci::cos(angle2);
	}

	inline float spherical_to_cylindrical_r(float r,const angle& angle1, const angle& angle2)
	{
		return r * msci::sin(angle2);
	}

	inline float spherical_to_cylindrical_theta(float r,const angle& angle1, const angle& angle2)
	{
		return angle1.get_value();
	}

	inline float spherical_to_cylindrical_z(float r,const angle& angle1, const angle& angle2)
	{
		return r * msci::cos(angle2);
	}

	inline float cylindrical_to_cartesian_3d_x(float r,const angle& angle, float z)
	{
		return r * msci::cos(angle);
	}

	inline float cylindrical_to_cartesian_3d_y(float r,const angle& angle, float z)
	{
		return r * msci::sin(angle);
	}

	inline float cylindrical_to_cartesian_3d_z(float r,const angle& angle, float z)
	{
		return z;
	}

	inline float cylindrical_to_spherical_r(float r,const angle& angle, float z)
	{
		return std::sqrt(std::pow(r,2) + std::pow(z,2));
	}

	inline float cylindrical_to_spherical_theta(float r,const angle& angle, float z)
	{
		return angle.get_value();
	}

	inline float cylindrical_to_spherical_phi(float r,const angle& angle, float z)
	{
		return std::atan(r/z);
	}
}

template<typename T>
bool operator ==(const msci::coordinates_3d<T>& x,const msci::coordinates_3d<T>& y)
{
	if (x.x == y.x and x.y == y.y and x.z == y.z)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template<typename T>
bool operator !=(const msci::coordinates_3d<T>& x,const msci::coordinates_3d<T>& y)
{
	return !(x == y);
}

template<typename T>
bool operator ==(const msci::coordinates_3d<T>& x,const msci::point_3d<T>& y)
{
	if (x.x == y.x and x.y == y.y and x.z == y.z)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template<typename T>
bool operator !=(const msci::coordinates_3d<T>& x,const msci::point_3d<T>& y)
{
	return !(x == y);
}

template<typename T>
bool operator ==(const msci::point_3d<T>& x,const msci::coordinates_3d<T>& y)
{
	if (x.x == y.x and x.y == y.y and x.z == y.z)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template<typename T>
bool operator !=(const msci::point_3d<T>& x,const msci::coordinates_3d<T> y)
{
	return !(x == y);
}

template<typename T>
bool operator ==(const msci::coordinates_3d<T>& x, const string& y)
{
	coordinates_3d<T> y_coordinates = coordinates_3d<T>(y);
	return (x == y_coordinates);
}

template<typename T>
bool operator !=(const msci::coordinates_3d<T>& x, const string& y)
{
	return !(x == y);
}

template<typename T>
bool operator ==(const string& x, const msci::coordinates_3d<T>& y)
{
	coordinates_3d<T> x_coordinates = coordinates_3d<T>(x);
	return (x_coordinates == y);
}

template<typename T>
bool operator !=(const string& x, const msci::coordinates_3d<T>& y)
{
	return !(x == y);
}

template<typename T>
void operator +=(string& x, const msci::coordinates_3d<T>& y)
{
	x += to_string(y);
}

template<typename T>
string operator +(const string& x,const msci::coordinates_3d<T>& y)
{
	return x + to_string(y);
}

template<typename T>
string operator +(const msci::coordinates_3d<T>& x,const string& y)
{
	return to_string(x) + y;
}

template<typename T>
ostream& operator << (ostream& os, const msci::coordinates_3d<T>& x)
{
	return os << to_string(x);
}

template<typename T>
istream& operator >>(istream& is, msci::coordinates_3d<T>& x)
{
	char a[256];
	is.getline(a, 256);
	string b(a);
	boost::trim(b);
	msci::coordinates_3d<T> c(b);
	x = c;
	return is;
}

#endif // MSCI_UNITS_COORDINATES_COORDINATES_3D_HPP_INCLUDED
