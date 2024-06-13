#define CATCH_CONFIG_MAIN

#include "catch2/catch_all.hpp"
#include "../../special_units/pOH.hpp"
#include "../../special_units/pH.hpp"
#include "../../units/unit_basic.hpp"
#include "../../units/unit_abbreviation.hpp"

#include <iostream>
#include <sstream>
#include <string>

using namespace std;
using namespace scifir;

TEST_CASE("pOH class","Full test of pOH class") {
	SECTION("Constructors of pOH class") {
        pOH a = pOH();
        REQUIRE (bool(a.get_value() == 0.0f));
        pOH b2 = pOH(6.0f);
        pOH b = pOH(b2);
        REQUIRE (bool(b.get_value() == 6.0f));
        pOH c2 = pOH(5.0f);
        pOH c = pOH(move(c2));
        REQUIRE (bool(c.get_value() == 5.0f));
        pOH d = pOH(4.0f);
        REQUIRE (bool(d.get_value() == 4.0f));
        pOH e = pOH("3");
        REQUIRE (bool(e.get_value() == 3.0f));
        scalar_unit f2 = 30_g;
        pOH f = pOH(f2 / 10_g);
        REQUIRE (bool(f.get_value() == 3.0f));
        scalar_unit g2 = 30_g;
        pOH g = pOH(g2);
        REQUIRE (bool(g.get_value() == 0.0f));
    }

    SECTION("Assignments of pOH class") {
        pOH a;
        pOH a2(10.0f);
        a = a2;
        REQUIRE (bool(a.get_value() == 10.0f));
        pOH b;
        pOH b2(8.0f);
        b = std::move(b2);
        REQUIRE (bool(b.get_value() == 8.0f));
        pOH c;
        c = 5.0f;
        REQUIRE (bool(c.get_value() == 5.0f));
        pOH d;
        d = "5.0";
        REQUIRE (bool(d.get_value() == 5.0f));
        pOH e;
        e = scalar_unit(3_N/1.5_N);
        REQUIRE (bool(e.get_value() == 2.0f));
        pOH f;
        f = scalar_unit(3_N);
        REQUIRE (bool(f.get_value() == 0.0f));
    }

    SECTION("Values of pOH class")
    {
        pOH a(4.5f);
        REQUIRE (bool(float(a) == 4.5f));
        pOH b(3.2f);
        REQUIRE (bool(b.get_value() == 3.2f));
    }

    SECTION("Operators of pOH class with other pOH classes")
    {
        pOH a(3.0f);
        REQUIRE (bool(a + pOH(2.0f) == pOH(5.0f)));
        pOH b(3.0f);
        REQUIRE (bool(b - pOH(1.0f) == pOH(2.0f)));
        pOH c(4.0f);
        c += pOH(2.0f);
        REQUIRE (bool(c == pOH(6.0f)));
        pOH d(4.0f);
        d -= pOH(2.0f);
        REQUIRE (bool(d == pOH(2.0f)));
    }

    SECTION("Numeric operators of pOH class")
    {
        pOH a(3.0f);
        REQUIRE (bool((a + 2.0f) == pOH(5.0f)));
        pOH b(3.0f);
        REQUIRE (bool((b - 1.0f) == pOH(2.0f)));
        pOH c(3.0f);
        REQUIRE (bool((2.0f + c) == pOH(5.0f)));
        pOH d(3.0f);
        REQUIRE (bool((5.0f - d) == pOH(2.0f)));
        pOH e(5.0f);
        e += 1.0f;
        REQUIRE (bool(e.get_value() == 6.0f));
        pOH f(6.0f);
        f -= 2.0f;
        REQUIRE (bool(f.get_value() == 4.0f));
        pOH g(6.0f);
        g++;
        REQUIRE (bool(g.get_value() == 7.0f));
        pOH h(8.0f);
        ++h;
        REQUIRE (bool(h.get_value() == 9.0f));
        pOH i(6.0f);
        i--;
        REQUIRE (bool(i.get_value() == 5.0f));
        pOH j(8.0f);
        --j;
        REQUIRE (bool(j.get_value() == 7.0f));
    }

    SECTION("H and OH functions")
    {
        pOH a(3.0f);
        pH b = a.get_pH();
        REQUIRE (bool(b.get_value() == 11.0f));
    }

    SECTION("Acidic, basic and neutral")
    {
        pOH a(4.0f);
        REQUIRE (bool(a.is_acidic() == false));
        REQUIRE (bool(a.is_basic() == true));
        REQUIRE (bool(a.is_neutral() == false));
        pOH b(11.0f);
        REQUIRE (bool(b.is_acidic() == true));
        REQUIRE (bool(b.is_basic() == false));
        REQUIRE (bool(b.is_neutral() == false));
        pOH c(7.0f);
        REQUIRE (bool(c.is_neutral() == true));
    }

    SECTION("Display of pOH")
    {
        pOH a(6.5f);
        REQUIRE (bool(a.display() == "6.5"));
        REQUIRE (bool(to_string(a) == "6.5"));
    }

    SECTION("Normalize value of pOH")
    {
        pOH a(15.0f);
        REQUIRE (bool(a.get_value() == 0.0f));
        pOH b(0.5f);
        REQUIRE (bool(b.get_value() == 0.0f));
    }

    SECTION("Comparison operators of pOH class with pOH classes")
    {
        REQUIRE (bool((pOH(3.0f) == pOH(3.0f)) == true));
        REQUIRE (bool((pOH(3.0f) == pOH(2.0f)) == false));
        REQUIRE (bool((pOH(3.0f) != pOH(2.0f)) == true));
        REQUIRE (bool((pOH(3.0f) > pOH(2.0f)) == true));
        REQUIRE (bool((pOH(2.0f) > pOH(3.0f)) == false));
        REQUIRE (bool((pOH(3.0f) >= pOH(2.0f)) == true));
        REQUIRE (bool((pOH(3.0f) < pOH(4.0f)) == true));
        REQUIRE (bool((pOH(4.0f) < pOH(3.0f)) == false));
        REQUIRE (bool((pOH(3.0f) <= pOH(4.0f)) == true));
    }

    SECTION("Comparison operators of pOH class with numeric types")
    {
        REQUIRE (bool((pOH(3.0f) == 3.0f) == true));
        REQUIRE (bool((pOH(3.0f) == 2.0f) == false));
        REQUIRE (bool((pOH(3.0f) != 2.0f) == true));
        REQUIRE (bool((3.0f == pOH(3.0f)) == true));
        REQUIRE (bool((2.0f == pOH(3.0f)) == false));
        REQUIRE (bool((2.0f != pOH(3.0f)) == true));
        REQUIRE (bool((pOH(3.0f) > 2.0f) == true));
        REQUIRE (bool((pOH(3.0f) >= 2.0f) == true));
        REQUIRE (bool((pOH(3.0f) < 4.0f) == true));
        REQUIRE (bool((pOH(3.0f) <= 4.0f) == true));
        REQUIRE (bool((2.0f < pOH(3.0f)) == true));
        REQUIRE (bool((2.0f <= pOH(3.0f)) == true));
        REQUIRE (bool((4.0f > pOH(3.0f)) == true));
        REQUIRE (bool((4.0f >= pOH(3.0f)) == true));
    }

    SECTION("String operators with pOH class")
    {
        REQUIRE (bool(pOH(3.0f) == "3.0"));
        REQUIRE (bool(pOH(3.0f) != "2.0"));
        REQUIRE (bool("3.0" == pOH(3.0f)));
        REQUIRE (bool("2.0" != pOH(3.0f)));
        string a = "pOH: ";
        a += pOH(4.0f);
        REQUIRE (bool(a == "pOH: 4"));
        REQUIRE (bool(("pOH: " + pOH(5.0f)) == "pOH: 5"));
        REQUIRE (bool((pOH(5.0f) + " pOH") == "5 pOH"));
    }

    SECTION("Stream operators of pOH class")
    {
        ostringstream a;
        a << pOH(8.0f);
        REQUIRE (bool(a.str() == "8"));
        stringstream b;
        b << "3.0";
        pOH b2;
        b >> b2;
        REQUIRE (bool(b2.get_value() == 3.0f));
    }
}