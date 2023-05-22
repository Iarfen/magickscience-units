#ifndef MSCI_UNITS_PREDEFINED_UNITS_SUBSTANCE_UNITS_HPP_INCLUDED
#define MSCI_UNITS_PREDEFINED_UNITS_SUBSTANCE_UNITS_HPP_INCLUDED

#include "msci/units/units/scalar_unit.hpp"

#include <iostream>

using namespace std;

namespace msci
{
	SCALAR_UNIT_HPP(molarity);
	SCALAR_UNIT_HPP(molality);
	SCALAR_UNIT_HPP(concentration);
	SCALAR_UNIT_HPP(linear_mass_density);
	SCALAR_UNIT_HPP(area_density);
	SCALAR_UNIT_HPP(dynamic_viscosity);
	SCALAR_UNIT_HPP(mass_flow_rate);
	SCALAR_UNIT_HPP(catalytic_activity);
}

ostream& operator <<(ostream&, const msci::concentration&);

#endif // MSCI_UNITS_PREDEFINED_UNITS_SUBSTANCE_UNITS_HPP_INCLUDED
