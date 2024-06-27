#define CATCH_CONFIG_MAIN

#include "catch2/catch_all.hpp"
#include "catch2/catch_test_macros.hpp"
#include "../../coordinates/coordinates_1d.hpp"
#include "../../units/unit_basic.hpp"

#include <string>
#include <sstream>

using namespace std;
using namespace scifir;

TEST_CASE("class coordinates_1d<T> and coordinates_1d<float>")
{
	SECTION("Constructors of coordinates_1d<> class")
	{
		coordinates_1d<> a;
		CHECK (bool(to_string(a) == "(0 m)"));
		CHECK (bool(to_string(a.x) == "0 m"));
		coordinates_1d<> a2(5_m);
		coordinates_1d<> a3(a2);
		CHECK (bool(to_string(a3) == "(5 m)"));
		coordinates_1d<> a4(5_m);
		coordinates_1d<> a5(std::move(a4));
		CHECK (bool(to_string(a3) == "(5 m)"));
		coordinates_1d<> b(100_m);
		CHECK (bool(to_string(b) == "(100 m)"));
		point_1d<> c2(100_m);
		coordinates_1d<> c(c2);
		CHECK (bool(to_string(c) == "(100 m)"));
		point_1d<> c4(100_m);
		coordinates_1d<> c3(std::move(c4));
		CHECK (bool(to_string(c3) == "(100 m)"));
		coordinates_1d<> d("(1 m)");
		CHECK (bool(to_string(d) == "(1 m)"));
		coordinates_1d<> e("1 m");
		CHECK (bool(to_string(e) == "(1 m)"));
	}

	SECTION("Constructors of coordinates_1d<float> class")
	{
		coordinates_1d<float> a;
		CHECK (bool(to_string(a) == "(0)"));
		CHECK (bool(a.x == 0.0f));
		coordinates_1d<float> a2(5.0f);
		coordinates_1d<float> a3(a2);
		CHECK (bool(to_string(a3) == "(5)"));
		coordinates_1d<float> a4(5.0f);
		coordinates_1d<float> a5(std::move(a4));
		CHECK (bool(to_string(a3) == "(5)"));
		coordinates_1d<float> b(100.0f);
		CHECK (bool(to_string(b) == "(100)"));
		point_1d<float> c2(100.0f);
		coordinates_1d<float> c(c2);
		CHECK (bool(to_string(c) == "(100)"));
		point_1d<float> c4(100.0f);
		coordinates_1d<float> c3(std::move(c4));
		CHECK (bool(to_string(c3) == "(100)"));
		coordinates_1d<float> d("(1)");
		CHECK (bool(to_string(d) == "(1)"));
		coordinates_1d<float> e("1");
		CHECK (bool(to_string(e) == "(1)"));
	}

	SECTION("Assignments of coordinates_1d<> class")
	{
		coordinates_1d<> a(10_m);
		coordinates_1d<> b(20_m);
		a = b;
		CHECK (bool(to_string(a) == "(20 m)"));
		coordinates_1d<> c(10_m);
		coordinates_1d<> d(30_m);
		c = std::move(d);
		CHECK (bool(to_string(c) == "(30 m)"));
		coordinates_1d<> e(10_m);
		point_1d<> f(15_m);
		e = f;
		CHECK (bool(to_string(e) == "(15 m)"));
		coordinates_1d<> e2(10_m);
		point_1d<> f2(15_m);
		e2 = std::move(f2);
		CHECK (bool(to_string(e2) == "(15 m)"));
		coordinates_1d<> g;
		g = "(1 m)";
		CHECK (bool(to_string(g) == "(1 m)"));
		coordinates_1d<> h;
		h = "1 m";
		CHECK (bool(to_string(h) == "(1 m)"));
	}

	SECTION("Assignments of coordinates_1d<float> class")
	{
		coordinates_1d<float> a(10.0f);
		coordinates_1d<float> b(20.0f);
		a = b;
		CHECK (bool(to_string(a) == "(20)"));
		coordinates_1d<float> c(10.0f);
		coordinates_1d<float> d(30.0f);
		c = std::move(d);
		CHECK (bool(to_string(c) == "(30)"));
		coordinates_1d<float> e(10.0f);
		point_1d<float> f(15.0f);
		e = f;
		CHECK (bool(to_string(e) == "(15)"));
		coordinates_1d<float> e2(10.0f);
		point_1d<float> f2(15.0f);
		e2 = std::move(f2);
		CHECK (bool(to_string(e2) == "(15)"));
		coordinates_1d<float> g;
		g = "(1)";
		CHECK (bool(to_string(g) == "(1)"));
		coordinates_1d<float> h;
		h = "1";
		CHECK (bool(to_string(h) == "(1)"));
	}

	SECTION("move(), set_position() and distance_to_origin() of coordinates_1d<> class")
	{
		coordinates_1d<> a(5_m);
		a.set_position(25_m);
		CHECK (bool(to_string(a) == "(25 m)"));
		coordinates_1d<> b(10_m);
		b.move(35_m);
		CHECK (bool(to_string(b) == "(45 m)"));
		coordinates_1d<> c(10_m);
		length d = c.distance_to_origin();
		CHECK (bool(to_string(d) == "10 m"));
	}

	SECTION("move(), set_position() and distance_to_origin() of coordinates_1d<float> class")
	{
		coordinates_1d<float> a(5.0f);
		a.set_position(25.0f);
		CHECK (bool(to_string(a) == "(25)"));
		coordinates_1d<float> b(10.0f);
		b.move(35.0f);
		CHECK (bool(to_string(b) == "(45)"));
		coordinates_1d<float> c(10.0f);
		CHECK (bool(c.distance_to_origin() == 10.0f));
	}

	SECTION("display_cartesian() of coordinates_1d<> class")
	{
		coordinates_1d<> a(5_m);
		CHECK (bool(a.display_cartesian() == "(5 m)"));
	}

	SECTION("display_cartesian() of coordinates_1d<> class")
	{
		coordinates_1d<float> a(5.0f);
		CHECK (bool(a.display_cartesian() == "(5)"));
	}

	SECTION("distance() functions of coordinates_1d<> class")
	{
		coordinates_1d<> a(10_m);
		coordinates_1d<> b(15_m);
		CHECK (bool(to_string(distance(a,b)) == "5 m"));
		coordinates_1d<> c(20_m);
		point_1d<> d(35_m);
		CHECK (bool(to_string(distance(c,d)) == "15 m"));
		CHECK (bool(to_string(distance(d,c)) == "15 m"));
	}

	SECTION("distance() functions of coordinates_1d<float> class")
	{
		coordinates_1d<float> a(10.0f);
		coordinates_1d<float> b(15.0f);
		CHECK (bool(distance(a,b) == 5.0f));
		coordinates_1d<float> c(20.0f);
		point_1d<float> d(35.0f);
		CHECK (bool(distance(c,d) == 15.0f));
		CHECK (bool(distance(d,c) == 15.0f));
	}

	SECTION("Relational operators of coordinates_1d<> class")
	{
		coordinates_1d<> a(7_m);
		coordinates_1d<> b(7_m);
		coordinates_1d<> c(6_m);
		CHECK(bool(a == b));
		CHECK(bool((a == c)) == false);
		CHECK(bool(a != c));
		point_1d<> d(7_m);
		point_1d<> e(5_m);
		CHECK(bool(a == d));
		CHECK(bool(a != e));
		CHECK(bool(d == a));
		CHECK(bool(e != a));
	}

	SECTION("Relational operators of coordinates_1d<float> class")
	{
		coordinates_1d<float> a(7.0f);
		coordinates_1d<float> b(7.0f);
		coordinates_1d<float> c(6.0f);
		CHECK(bool(a == b));
		CHECK(bool((a == c)) == false);
		CHECK(bool(a != c));
		point_1d<float> d(7.0f);
		point_1d<float> e(5.0f);
		CHECK(bool(a == d));
		CHECK(bool(a != e));
		CHECK(bool(d == a));
		CHECK(bool(e != a));
	}

	SECTION("String operators of coordinates_1d<> class")
	{
		coordinates_1d<> a(7_m);
		CHECK(bool(a == "(7 m)"));
		CHECK(bool(a != "(6 m)"));
		CHECK(bool("(7 m)" == a));
		CHECK(bool("(6 m)" != a));
		std::string b = "x: ";
		b += a;
		CHECK(bool(b == "x: (7 m)"));
		CHECK(bool(("x: " + a) == "x: (7 m)"));
		CHECK(bool("x: (7 m)" == ("x: " + a)));
	}

	SECTION("String operators of coordinates_1d<float> class")
	{
		coordinates_1d<float> a(7.0f);
		CHECK(bool(a == "(7)"));
		CHECK(bool(a != "(6)"));
		CHECK(bool("(7)" == a));
		CHECK(bool("(6)" != a));
		std::string b = "x: ";
		b += a;
		CHECK(bool(b == "x: (7)"));
		CHECK(bool(("x: " + a) == "x: (7)"));
		CHECK(bool("x: (7)" == ("x: " + a)));
	}

	SECTION("Streams of coordinates_1d<> class")
	{
		coordinates_1d<> a(2_m);
		std::ostringstream out;
		out << a;
		CHECK(bool(out.str() == "(2 m)"));
		std::istringstream iss("(1 m)");
		coordinates_1d<> b;
		iss >> b;
		CHECK(bool(to_string(b) == "(1 m)"));
	}

	SECTION("Streams of coordinates_1d<float> class")
	{
		coordinates_1d<float> a(2.0f);
		std::ostringstream out;
		out << a;
		CHECK(bool(out.str() == "(2)"));
		std::istringstream iss("(1)");
		coordinates_1d<float> b;
		iss >> b;
		CHECK(bool(to_string(b) == "(1)"));
	}
}
