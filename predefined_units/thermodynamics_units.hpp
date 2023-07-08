#ifndef SCIFIR_UNITS_PREDEFINED_UNITS_THERMODYNAMICS_UNITS_HPP_INCLUDED
#define SCIFIR_UNITS_PREDEFINED_UNITS_THERMODYNAMICS_UNITS_HPP_INCLUDED

#include "units/scalar_unit.hpp"
#include "units/vector_unit_3d.hpp"

using namespace std;

namespace scifir
{
	SCALAR_UNIT_HPP(energy);
	SCALAR_UNIT_HPP(action);
	SCALAR_UNIT_HPP(power);
	SCALAR_UNIT_HPP(power_density);
	SCALAR_UNIT_HPP(enthalpy);
	SCALAR_UNIT_HPP(entropy);
	SCALAR_UNIT_HPP(heat_capacity);
	SCALAR_UNIT_HPP(heat_flux_density);
	SCALAR_UNIT_HPP(thermal_conductivity);
	SCALAR_UNIT_HPP(thermal_diffusivity);
	SCALAR_UNIT_HPP(thermal_resistance);
	SCALAR_UNIT_HPP(thermal_expansion_coefficient);
	VECTOR_UNIT_HPP(temperature_gradient);
	SCALAR_UNIT_HPP(energy_flux_density);
}

#endif // SCIFIR_UNITS_PREDEFINED_UNITS_THERMODYNAMICS_UNITS_HPP_INCLUDED
