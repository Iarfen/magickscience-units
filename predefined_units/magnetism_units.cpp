#include "predefined_units/magnetism_units.hpp"

using namespace std;

namespace scifir
{
	SCALAR_UNIT_CPP(polarization_density,"A*s/m2");
	SCALAR_UNIT_CPP(magnetic_permeability,"A2*s2/kg*m");
	SCALAR_UNIT_CPP(magnetization,"A/m");
	SCALAR_UNIT_CPP(magnetic_flux,"Wb");
	VECTOR_UNIT_CPP(magnetic_strength,"Wb/m2");
	VECTOR_UNIT_CPP(magnetic_moment,"A*m2");
	SCALAR_UNIT_CPP(magnetic_reluctance,"A2*s2/kg*m2");
	VECTOR_UNIT_CPP(magnetic_vector_potential,"kg*m/A*s2");
	SCALAR_UNIT_CPP(magnetic_rigidity,"kg*m/A*s2");
	VECTOR_UNIT_CPP(magnetomotive_force,"A");
	SCALAR_UNIT_CPP(magnetic_susceptibility,"A2*s2/kg*m");
}
